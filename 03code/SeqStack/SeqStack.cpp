#include"SeqStack.h"
#include<bits/stdc++.h>

template<class ElemType>
SeqStack<ElemType>::SeqStack(){
    top = -1;
}

template<class ElemType>
void SeqStack<ElemType>::Push(ElemType x){
    if(top == StackSize - 1){
        throw "full, top";
    }
    data[++top] = x;
}

template<class ElemType>
ElemType SeqStack<ElemType>::Pop(){
    if(top == -1){
        throw "empty, down";
    }
    ElemType x;
    x = data[top--];
    return x;
}

template<class ElemType>
SeqStack<ElemType>::~SeqStack(){
    
}

template<class ElemType>
ElemType SeqStack<ElemType>::GetTop(){
    if(top == -1){
        throw "empty";
    }
    ElemType x;
    x = data[top];
    return x;
}

template<class ElemType>
int SeqStack<ElemType>::Empty(){
    if(top == -1){
        return 0;
    }
    return 1;
}
