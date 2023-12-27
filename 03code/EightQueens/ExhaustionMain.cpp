// #include <bits/stdc++.h>
// using namespace std;

// // 判断位置是否合适
// bool judge(int queen[]){
//     for(int i = 0; i < 8; i++){
//         for(int j = 0; j < i; j++){
//         // for(int j = i; j < 8; j++){
//             // 在同一列
//             if(queen[i] == queen[j]){
//                 return true;
//             }
//             // 在同一对角线上
//             if(abs(queen[i] - queen[j]) == abs(i-j)){
//                 return true;
//             }
//         }
//     }
//     return false;
// }

// void EnumQueensPositon(int queenArr[], int &nSolution) {
//     for(queenArr[0] = 0; queenArr[0] < 8; queenArr[0]++){
//         for(queenArr[1] = 0; queenArr[1] < 8; queenArr[1]++){
//             for(queenArr[2] = 0; queenArr[2] < 8; queenArr[2]++){
//                 for(queenArr[3] = 0; queenArr[3] < 8; queenArr[3]++){
//                     for(queenArr[4] = 0; queenArr[4] < 8; queenArr[4]++){
//                         for(queenArr[5] = 0; queenArr[5] < 8; queenArr[5]++){
//                             for(queenArr[6] = 0; queenArr[6] < 8; queenArr[6]++){
//                                 for(queenArr[7] = 0; queenArr[7] < 8; queenArr[7]++){
//                                         if(judge(queenArr)){
//                                             continue;
//                                         }else{
//                                             nSolution++;
//                                         }
//                                 }
//                             }
//                         }
//                     }
//                 }
//             }
//         }
//     }
// }

// int main(){
//     int queen[8];
//     int so = 0;
//     EnumQueensPositon(queen, so);
//     cout << so << endl;
//     return 0;
// }