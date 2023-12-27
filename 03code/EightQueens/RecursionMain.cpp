#include <bits/stdc++.h>
using namespace std;
int queenArr[8], nlen = 8, nSolution = 0;


void search(int r){
    if(r == nlen){
        nSolution++;
        return;
    }

    for(int i = 0; i < nlen; i++){
        // 摆放的位置
        queenArr[r] = i;
        int ok = 1;
        for(int j = 0; j < r; j++){
            if(queenArr[r] == queenArr[j] || abs(queenArr[r] - queenArr[j]) == abs(r-j)){
                ok = 0;
                break;
            }
        }
        if(ok){
            search(r+1);
        }
    }

}




int main(){

    search(0);
    cout << nSolution << endl;
    return 0;
}