#include <iostream>
using namespace std; /*使用std命名空间，避免命名冲突*/
#include "SeqList.cpp"

int main(){
    int r[10] = {4, 2, 6, 8, 12, 10, 14, 16, 19, 18};
    SeqList<int> l(r, 10);
    l.PrintList();
    return 0;
}