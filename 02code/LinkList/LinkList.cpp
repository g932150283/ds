#include"LinkList.h"

template <class ElemType>
LinkList<ElemType>::LinkList(){
    first = new Node<ElemType>;
    first->next = NULL;
}

template <class ElemType>
LinkList<ElemType>::LinkList(ElemType a[], int n){
    // 头插法


    // 尾插法


    
}
    ~LinkList();
    int Length();
    ElemType Get(int i);
    int Locate();
    void Insert(int i, ElemType x);
    ElemType Delete(int i);
    void PrintList();