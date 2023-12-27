// #include<bits/stdc++.h>
// #define START_I 1
// #define START_J 1
// #define END_I 6
// #define END_J 8
// #define ROW 8
// #define COL 10
// using namespace std;
// /*初始化迷宫*/
// // int maze[ROW][COL] = { 
// //         {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}, 
// //         {1, 0, 1, 1, 1, 0, 1, 1, 1, 1}, 
// //         {1, 1, 0, 1, 0, 1, 1, 1, 1, 1}, 
// //         {1, 0, 1, 0, 0, 0, 0, 0, 1, 1}, 
// //         {1, 0, 1, 1, 1, 0, 1, 1, 1, 1}, 
// //         {1, 1, 0, 0, 1, 1, 0, 0, 0, 1}, 
// //         {1, 0, 1, 1, 0, 0, 1, 1, 0, 1}, 
// //         {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}};
// int maze[ROW][COL] = { 
//         {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}, 
//         {1, 0, 1, 1, 1, 0, 1, 1, 1, 1}, 
//         {1, 0, 0, 1, 0, 1, 1, 1, 1, 1}, 
//         {1, 0, 1, 0, 0, 0, 0, 0, 1, 1}, 
//         {1, 0, 0, 1, 1, 0, 1, 1, 1, 1}, 
//         {1, 1, 0, 0, 0, 1, 0, 0, 0, 1}, 
//         {1, 0, 1, 1, 0, 0, 0, 1, 0, 1}, 
//         {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}};
// /*初始化标志位，0代表没走过，1代表走过*/
// int mark[ROW][COL] = {0}; 

// /*方向*/
// typedef struct{ 
//     short int vert; 
//     short int horiz; 
// }offsets; 

// /*当前位置的8个方向，右，下，左，上，左上，左下，右上，右下*/ 
// // offsets Move[8] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}, {-1, -1}, {1, -1}, {-1, 1}, {1, 1}};
// offsets Move[4] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
// /*迷宫类型*/
// typedef struct element{ 
//     short int row; 
//     short int col; 
//     short int dir; 
    
// }element;

// /*打印迷宫*/
// void printMaze(int maze[][COL], int row) {
// 	cout<<"迷宫为："<<endl;
// 	for(int i = 0; i < row; i++) {
// 		for(int j = 0; j < COL; j++) {
// 			cout<<maze[i][j]<<" ";
// 		}
// 		cout<<endl;
// 	}
// }

// /*打印起点和终点*/
// void printStartAndEnd() {
// 	cout<<"起点为：("<<START_I<<","<<START_J<<")"<<endl;
// 	cout<<"终点为：("<<END_I<<","<<END_J<<")"<<endl; 
// }

// /*迷宫函数*/
// void path(){
//     stack<element> s;
//     element position;
//     int i, row, col, next_row, next_col, dir; 
//     // 是否找到路径
//     int found = 0; 
//     // 初始化标志数组元素
//     mark[START_I][START_J] = 1;
//     // 设置开始位置
//     element start;
//     start.row = START_I, start.col = START_J, start.dir = 0;
//     // 起点入栈
//     s.push(start);
//     while (!s.empty() && !found){
//         position = s.top();
//         s.pop();
//         row = position.row;
//         col = position.col;
//         dir = position.dir;
//         while (dir < 4 && !found){
//             next_row = row + Move[dir].vert;
//             next_col = col + Move[dir].horiz;
//             // 判断还要不要走
//             if(row == END_I && col == END_J){
//                 found = 1;
//             }else if(maze[next_row][next_col] != 1 && mark[next_row][next_col] != 1){
//                 // 如果可以走，继续走
//                 mark[next_row][next_col] = 1;
//                 position.row = row; 
//                 position.col = col; 
//                 position.dir = ++dir;
//                 s.push(position);
//                 row = next_row;
//                 col = next_col;
//                 dir = 0;
//             }else{
//                 // 换个方向继续走
//                 dir++;
//             }
//         }

//         if(found){
//             // 输出显示路径
//             position.row = END_I;
//             position.col = END_J;
//             position.dir = 0;
//             s.push(position);
//             cout << "路径为：" << endl;
//             stack<element> r;
//             while (!s.empty()){
//                 r.push(s.top());
//                 s.pop();
//             }
//             while (!r.empty()){
//                 cout << "(" << r.top().row << "," << r.top().col << ")" << endl;
//                 r.pop();
//             } 
//             cout << endl;
//         }else{
//             cout << "不存在路径" << endl;
//         }
        
//     }
    
// }

// int main(){

//     printMaze(maze,ROW);
//     printStartAndEnd();
//     path();
//     return 0;
// }