#include<bits/stdc++.h>
#define START_I 1
#define START_J 1
#define END_I 6
#define END_J 8
#define ROW 8
#define COL 10
using namespace std;
// /*初始化迷宫*/
// int maze1[ROW][COL] = { 
//         {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}, 
//         {1, 0, 1, 1, 1, 0, 1, 1, 1, 1}, 
//         {1, 1, 0, 1, 0, 1, 1, 1, 1, 1}, 
//         {1, 0, 1, 0, 0, 0, 0, 0, 1, 1}, 
//         {1, 0, 1, 1, 1, 0, 1, 1, 1, 1}, 
//         {1, 1, 0, 0, 1, 1, 0, 0, 0, 1}, 
//         {1, 0, 1, 1, 0, 0, 1, 1, 0, 1}, 
//         {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}};
int maze1[ROW][COL] = { 
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}, 
        {1, 0, 1, 1, 1, 0, 1, 1, 1, 1}, 
        {1, 0, 0, 1, 0, 1, 1, 1, 1, 1}, 
        {1, 0, 1, 0, 0, 0, 0, 0, 1, 1}, 
        {1, 0, 0, 1, 1, 0, 1, 1, 1, 1}, 
        {1, 1, 0, 0, 0, 1, 0, 0, 0, 1}, 
        {1, 0, 1, 1, 0, 0, 0, 1, 0, 1}, 
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}};

/*打印迷宫*/
void printMaze1(int maze[][COL], int row) {
	cout<<"迷宫为："<<endl;
	for(int i = 0; i < row; i++) {
		for(int j = 0; j < COL; j++) {
			cout<<maze[i][j]<<" ";
		}
		cout<<endl;
	}
}

/*打印起点和终点*/
void printStartAndEnd1() {
	cout<<"起点为：("<<START_I<<","<<START_J<<")"<<endl;
	cout<<"终点为：("<<END_I<<","<<END_J<<")"<<endl; 
}

int VisitMaze(int maze1[][COL], int i, int j){
    /*
        能进入该函数，说明这个方向可以走
        要有递归出口
    */
    int end = 0;
    // 2：可以走
    maze1[i][j] = 2;
    if(i == END_I && j == END_J){
        end = 1;
    }
    // 4个方向
    // ↑
    if(end!=1 && i-1 >= START_I && maze1[i-1][j] == 0){
        if(VisitMaze(maze1, i-1, j) == 1){
            return 1;
        }
    }
    // ↓
    if(end!=1 && i+1 <= END_I && maze1[i+1][j] == 0){
        if(VisitMaze(maze1, i+1, j) == 1){
            return 1;
        }
    }
    // ←
    if(end!=1 && j-1 >= START_J && maze1[i][j-1] == 0){
        if(VisitMaze(maze1, i, j-1) == 1){
            return 1;
        }
    }
    // →
    if(end!=1 && j+1 <= END_J && maze1[i][j+1] == 0){
        if(VisitMaze(maze1, i, j+1) == 1){
            return 1;
        }
    }
    if(end !=1 ){
        maze1[i][j] = 0;
    }
    return end;
}

int main(){

    printMaze1(maze1,ROW);
    printStartAndEnd1();
    int i = VisitMaze(maze1, START_I, START_J);
    printMaze1(maze1,ROW);
    return 0;
}