#include <iostream>
using namespace std;
#include "LinkList.cpp"

int main(){
    
    int r[10] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    LinkList<int> L(r, 10);
    L.PrintList();
    return 0;
}