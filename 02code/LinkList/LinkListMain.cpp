#include <iostream>
using namespace std;
#include "LinkList.cpp"

int main(){
    
    // int r[10] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    // LinkList<int> L(r, 10);
    // L.PrintList();
    // int length = L.Length();
    // cout << "L.Length() = " << length << endl;
    // int i = L.Get(9);
    // cout <<"L.Get(9) = " << i << endl;
    // int locate = L.Locate(1);
    // cout <<"L.Locate(1) = " << locate << endl;
    // L.Insert(1, 20);
    // cout <<"after L.Insert(1, 20): " << endl;
    // L.PrintList();
    // cout <<"after L.Insert(12, 0): " << endl;
    // L.Insert(12, 0);
    // L.PrintList();
    // // cout <<"after L.Invert(): " << endl;
    // // L.Invert();
    // // L.PrintList();
    // cout <<"is Seq :"<< L.Seq() << endl;

    int r1[10] = {1, 6, 5, 110, -13};
    LinkList<int> L1(r1, 5);
    L1.PrintList();
    cout <<"is Seq :"<< L1.Seq() << endl;
    // cout <<"after L1.Sort(): " << endl;
    // L1.Sort();
    L1.PrintList();
    return 0;
}