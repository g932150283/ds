#include"LinkList.h"

template <class ElemType>
LinkList<ElemType>::LinkList(){
    first = new Node<ElemType>;
    first->next = NULL;
}

template <class ElemType>
LinkList<ElemType>::LinkList(ElemType a[], int n){
    // 头插法 逆序
    first =  new Node<ElemType>;
    first->next = nullptr;
    for (int i = 0; i < n; i++){
        Node<ElemType> *s = new Node<ElemType>;
        s->data = a[i];
        s->next = first->next;
        first->next = s;
    }

    // 尾插法 顺序
    // first =  new Node<ElemType>;
    // rear =  first;
    // for (int i = 0; i < n; i++){
    //     Node s = new Node<ElemType>
    //     s->data = a[i];
    //     rear->next = s;
    //     rear = s;
    // }
    // rear->next = nullptr;
}
template <class ElemType>
LinkList<ElemType>::~LinkList(){
    // 释放过程中，保证单链表违背处理的部分不断开
    while(first != nullptr){
        Node<ElemType> *p = first;
        first = first->next;
        delete p;
    }
}

template <class ElemType>
int LinkList<ElemType>::Length(){
    // 头没有数据，从头指针下一个计数
    // int count = 0;
    // while (first != nullptr){
    //     count++;
    //     first = first->next;
    // }
    // return count;    

    Node<ElemType> *p = first->next;
    int count = 0;
    while (p != nullptr){
        count++;
        p = p->next;
    }
    return count;    
}

template <class ElemType>
ElemType LinkList<ElemType>::Get(int i){
    
}

template <class ElemType>
int LinkList<ElemType>::Locate(){
    
}

template <class ElemType>
void LinkList<ElemType>::Insert(int i, ElemType x){
    
}

template <class ElemType>
ElemType LinkList<ElemType>::Delete(int i){
    
}

template <class ElemType>
void LinkList<ElemType>::PrintList(){
    Node<ElemType> *p = first->next;
    while (p != nullptr){
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
    
}