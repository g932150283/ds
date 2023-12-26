#include <iostream>
using namespace std;
#include "LinkList.cpp"

template <class ElemType>
void Merge(LinkList<ElemType> & l1, LinkList<ElemType> & l2);

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

    int r1[10] = {-13, 1, 6, 5, 110};
    LinkList<int> L1(r1, 5);
    int r2[10] = {1, 126, 125, 12110, 1111213};
    LinkList<int> L2(r2, 5);
    L1.PrintList();
    cout <<"is Seq :"<< L1.Seq() << endl;
    // cout <<"after L1.Sort(): " << endl;
    // L1.Sort();
    L1.PrintList();
    Merge(L1, L2);
    L1.PrintList();
    return 0;
}


template <class ElemType>
void Merge(LinkList<ElemType> & l1, LinkList<ElemType> & l2){
    Node<ElemType> *r = l1.GetFirst();
    Node<ElemType> *p = l1.GetFirst()->next;
    Node<ElemType> *q = l2.GetFirst()->next;

    while (p != nullptr && q != nullptr){
        if(p->data <= q->data){
            r->next = p;
            r = p;
            p = p->next;
        }else{
            r->next = q;
            r = q;
            q = q->next;
        }
    }

    while (p != nullptr){
        r->next = p;
        r = p;
        p = p->next;
    }

    while (q != nullptr){
        r->next = q;
        r = q;
        q = q->next;
    }
    r->next = nullptr;   
}