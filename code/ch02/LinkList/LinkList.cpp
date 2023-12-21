#include "LinkList.h"
#include<iostream>
using namespace std;


template <class ElemType>
LinkList<ElemType>::LinkList() {
	first = new Node<ElemType>; /*����ͷ���*/
	first->next = nullptr; /*ͷ����ָ������Ϊ��*/
}

template <class ElemType>  
LinkList<ElemType>::LinkList(ElemType a[], int n) {
	Node<ElemType> *r, *s;
	first = new Node<ElemType>; /*����ͷ���*/
	r = first; /*βָ���ʼ��*/
	for(int i = 0;i < n;i++) { 
		s = new Node<ElemType>; /*�����½��*/
		s->data = a[i]; /*���½���������ֵ*/
		r->next = s; /*���½����뵽������ĩβ*/
		r = s; /*����βָ��r*/
	}
	r->next=nullptr; /*���ն˽���ָ�����ÿ�*/
}

template <class ElemType>
LinkList<ElemType>::~LinkList() {
	Node<ElemType> *q;
	while(first != nullptr) { /*����������Ϊ��ʱ*/
		q = first; /*�ݴ汻�ͷŽ��*/
		first = first->next; /*����������һ�����*/
		delete q; /*�ͷ�q*/
	}
}

template <class ElemType>
int LinkList<ElemType>::Length() {
	Node<ElemType> *p = first->next;
	int count = 0;
	while(p != nullptr) {
		count++;
		p = p->next;
	}
	return count;
}

template <class ElemType>
ElemType LinkList<ElemType>::Get(int i) {
	Node<ElemType> *p = first->next;
	int count = 1;
	while(p != nullptr && count < i) {
		p = p->next;
		count++;
	}
	if(p!=nullptr) 
		return p->data;
	else 
		throw  "�����Ƿ�";
}


template <class ElemType>  
void LinkList<ElemType>::Insert(int i, ElemType x)
{
	Node<ElemType> *p = first,*s;
	int j = 0; /*����ָ��pӦָ��ͷ���*/
    while(p != nullptr && j < i-1) { /*���ҵ�i-1�����*/
		p = p->next; /*����ָ��p����*/
		j++; /*��������1*/
    }
    /*û���ҵ���i-1�����*/
    if (p == nullptr) throw "�������Ϸ��������ڵ�i-1�����";
    else {
		s = new Node<ElemType>; /*�����½��*/
		s->data = x; /*������ֵ*/
		s->next = p->next;
		p->next = s; /*�����s���뵽���p֮��*/
    }
}

template <class ElemType>  
ElemType LinkList<ElemType>::Delete(int i) {
	Node<ElemType> *p,*q;
	ElemType x;
	int j = 0; /*��������ʼ��*/
	p = first; /*ע�⹤��ָ��pҪָ��ͷ���*/
	while(p != nullptr && j < i-1) { /*���ҵ�i-1�����*/
		p = p->next;
		j++;
	}
	if(p == nullptr || p->next == nullptr) /*���p�����ڻ�p���ڵ�p�ĺ�̽�㲻����*/
		throw "����i���Ϸ�"; 
	else {
		q = p->next;
		x = q->data; /*�ݴ汻ɾ����������*/
		p->next = q->next; /*����p����ָ����*/
		delete q; /*�ͷ�q*/
		return x;
	}
}

template <class ElemType>  
int LinkList<ElemType>::Locate(ElemType x) {
	Node<ElemType> *p;
	p = first->next; /*����ָ��p��ʼ��*/
	int j = 1; /*�ۼ���j��ʼ��*/
	while(p != nullptr) {
		if(p->data == x) 
			return j; /*���ҳɹ������������*/
		p = p->next;                   
		j++;
	}
	return 0; /*����ʧ�ܣ�����0*/
}

template <class ElemType>
void LinkList<ElemType>::PrintList() {
	Node<ElemType> *p;
	p = first->next; /*����ָ��p��ʼ��*/
	while(p != nullptr) {
		cout<<p->data<<" ";
		p = p->next; /*����ָ��p����*/
	}
	cout<<endl;
}
