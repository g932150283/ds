#include<bits/stdc++.h>

using namespace std;

stack<int> S;

/*
    N 输入的数据
    n 转换的进制
*/
void HexConversion(int N, int n);

int main(){
    cout << "HexConversion(15, 2): " << endl;
    HexConversion(15, 2);
    cout << "HexConversion(15, 4): " << endl;
    HexConversion(15, 4);
    cout << "HexConversion(15, 8): " << endl;
    HexConversion(15, 8);
    cout << "HexConversion(15, 16): " << endl;
    HexConversion(15, 16);
    return 0;
}

void HexConversion(int N, int n){
    while (N != 0){
        S.push(N % n);
        N /= n;
    }

    while (!S.empty()){
        int e = S.top();
        S.pop();
        // 获取的进制转换
        if(e > 9){
            e = e + 55;
            cout << (char)e;
        }else{
            cout << e;
        }
    }
    cout << endl;
    
    
}