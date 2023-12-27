#include<bits/stdc++.h>

using namespace std;

void Hanoi(int n, char a, char b, char c);

int main(){

    int n = 3;
    Hanoi(n, 'A', 'B', 'C');
    return 0;
}
/*
    n 碟子的个数
    a 起始位置
    b 辅助移动位置
    c 终止位置
*/
void Hanoi(int n, char a, char b, char c){
    if(n == 1){
        cout << a << " 移动到 " << c << endl;
    }else{
        Hanoi(n-1, a, c, b);
        cout << a << " 移动到 " << c << endl;
        Hanoi(n-1, b, a, c);
    }
}