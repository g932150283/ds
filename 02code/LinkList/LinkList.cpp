#include"LinkList.h"
#include<iostream>
using namespace std;
template <class ElemType>
LinkList<ElemType>::LinkList(){
    first = new Node<ElemType>;
    first->next = nullptr;
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
    Node<ElemType> *p = first->next;
    int count = 1;
    while (count < i){
        count++;
        p = p->next;
    }
    return p->data;
    // return *p;    
}

template <class ElemType>
int LinkList<ElemType>::Locate(ElemType x){
    Node<ElemType> *p = first->next;
    int count = 1;
    while (p != nullptr){
        if(p->data == x){
            return count;
        }
        count++;
        p = p->next;
    }
    return 0;
    
}

template <class ElemType>
void LinkList<ElemType>::Insert(int i, ElemType x){
    // 找到这个位置，然后插
    Node<ElemType> *p = first;
    int count = 0;
    
    while (p != nullptr && count < i - 1){
        p = p->next;
        count++;
    }
    if(p != nullptr){
        Node<ElemType> *s = new Node<ElemType>;
        s->data = x;
        s->next = p->next;
        p->next = s;
    }    
}

template <class ElemType>
ElemType LinkList<ElemType>::Delete(int i){
    // 找到删，否则越界
    if(i < 1 || i > Length()){
        throw "error";
    }
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

template <class ElemType>
void LinkList<ElemType>::Invert(){
    Node<ElemType> *p = first->next;
    first->next = nullptr;
    while (p != nullptr){
        // Node<ElemType> *q = p->next;
        // p->next = first->next;
        // first->next = p;
        // p = q;

        // Node<ElemType> *s = p; 
        // s->next = first->next;
        // first->next = s;
        // p = p->next;

        // 获取当前结点的下一个结点
        // first  --->   q
        //        p -----^
        // 保留下次一头插位置
        Node<ElemType> *q = p->next;
        // 头插
        p->next = first->next;
        first->next = p;
        p = q;
    }
    
}

template <class ElemType>
int LinkList<ElemType>::Seq(){
    Node<ElemType> *p = first->next;
    Node<ElemType> *q;
    int flag = 1;
    if(p != nullptr){
        q = p->next;
    }
    while (p != nullptr && q != nullptr){
        if (p->data > q->data){
            flag = 0;
            break;
        }else{
            p = p->next;
            q = q->next;
        }
    }
    return flag;
    
}


template <class ElemType>
void LinkList<ElemType>::Sort(){
    Node<ElemType> *p = first->next;
    Node<ElemType> *q = p->next;
    Node<ElemType> *temp;
    p->next = nullptr;
    while (q != nullptr){
        temp = q->next;
        if(p->data < q->data){
            // 后面插
            q->next = p->next;
            q->next = p;
        }else{
            // 前面插
            
        }
    }
    
}