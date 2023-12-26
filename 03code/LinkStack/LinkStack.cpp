#include "LinkStack.h"
#include<iostream>
template <class ElemType>
LinkStack<ElemType>::LinkStack() {
	top = NULL;
}

template <class ElemType>  
LinkStack<ElemType>::~LinkStack() {
	Node<ElemType> *q;
	// 找一个替罪羊
	while (q != NULL){
		q = top;
		top = top->next;
		delete q;
	}
	
}

template <class ElemType>  
void LinkStack<ElemType>::Push(ElemType x) {
	// 没有头节点，top直接指向元素结点
	Node<ElemType> *s = new Node<ElemType>;
	s->data = x;
	s->next = top;
	top = s;

}

template <class ElemType>
ElemType LinkStack<ElemType>::Pop() {
	if(top == NULL){
		throw "top, down";
	}
	ElemType x = top->data;
	Node<ElemType> *q = top;
	top = top->next;
	delete q;
	return x;
}

template <class ElemType>
ElemType LinkStack<ElemType>::GetTop() {
	if(top == NULL){
		throw "top, down";
	}
	return top->data;
}

template <class ElemType>
int LinkStack<ElemType>::Empty() {
	if(top == NULL) {
		return 1;
	}
	else {
		return 0;
	}
}
	