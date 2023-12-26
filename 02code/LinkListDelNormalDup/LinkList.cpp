#include <iostream>
#include "LinkList.h"
using namespace std;
template <class ElemType>
LinkList<ElemType>::LinkList() {
	first = new Node<ElemType>;
	first->next = NULL;
}

template <class ElemType>
LinkList<ElemType>::LinkList(ElemType a[], int n) {
	// 尾插，顺序
	Node<ElemType> *r,*s;
	first = new Node<ElemType>;
	r = first;
	for(int i = 0; i < n; i++) {
		s = new Node<ElemType>;
		s->data = a[i];
		r->next = s;
		r = s;
	}
	r->next = NULL;
}

template <class ElemType>
LinkList<ElemType>::~LinkList() {
	Node<ElemType> *q = NULL;
	while(first != NULL) {
		q = first;
		first = first->next;
		delete q;
	}
}

template <class ElemType>
Node<ElemType>* LinkList<ElemType>::GetFirst() {
	return first;
}

template <class ElemType>
void LinkList<ElemType>::PrintList() {
	Node<ElemType> *p = first->next;
	while(p!=NULL) {
		cout<<p->data<<" ";
		p = p->next;
	}
	cout<<endl;
}

template <class ElemType>
int LinkList<ElemType>::Locate(ElemType a){
	Node<ElemType> *p = first->next;
	int count = 0;
	while (p != NULL){
		count++;
		if(p->data == a){
			return count;
		}
		p = p->next;
	}
	return 0;
	
}

template <class ElemType>
void LinkList<ElemType>::DelDup(){
	// Node<ElemType> *p = first->next;
	// while (p != NULL){
	// 	// 如果等于下一个，那么改变，否则后移
	// 	if(p->next != NULL && p->data == p->next->data){
	// 		p->next = p->next->next;
	// 	}else{
	// 		p = p->next;
	// 	}		
	// }

	Node<ElemType> *p = first->next;
	while (p != NULL){
		Node<ElemType> *q = p->next;
		while (q != NULL && q->data == p->data){
			Node<ElemType> *r = q->next;
			p->next = q->next;
			delete q;
			q = r;
		}
		p = p->next;
		
	}
	
}

template <class ElemType>
void LinkList<ElemType>::DelNormalDup(){
	Node<ElemType> *p = first->next;
	while (p != NULL){
		Node<ElemType> *q = p->next;
		while (q != NULL){
			if(q->data == p->data){
				Node<ElemType> *r = q->next;
				p->next = q->next;
				delete q;
				q = r;
			}else{
				q = q->next;
			}
		}
		p = p->next;
		
	}
	
}