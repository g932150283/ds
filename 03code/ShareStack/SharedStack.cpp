#include <iostream>
using namespace std;
#include "ShareStack.h"

template <class ElemType>
SharedStack<ElemType>::SharedStack() {
	top1 = -1;
	top2 = StackSize;
}

template <class ElemType>
SharedStack<ElemType>::~SharedStack() {
} 

template <class ElemType> 
void SharedStack<ElemType>::Push(int i, ElemType x) {
    if(top1 == top2 - 1) 
		throw "栈满";
	if(i == 1) 
		data[++top1]=x; //栈1入栈
	if(i == 2) 
		data[--top2]=x; /*栈2入栈*/
}

template <class ElemType>
ElemType SharedStack<ElemType>::Pop(int i) { 
	if ( i == 1 ){
		if (top1==0) throw "栈1为空";
		return data[--top1];
	}
	if ( i==2 ){
		if  ( top2 == StackSize) throw " 栈2为空";
		return data[++top2];

	}
	 
}

template <class ElemType> 
ElemType SharedStack<ElemType>::GetTop(int i) {
	if ( i == 1 ){
		return data[top1];
	}
	if (i == 2 ){
		return data[top2];
	}
}

template <class ElemType> 
int SharedStack<ElemType>::Empty(int i) {
	if ( i == 1 ){
		if (top1==0){return 1;}
		else{
			return 0;
		}
	}
	if ( i == 2 ){
		if (top2==StackSize){return 1;}
		else{
			return 0;
		}
	}

		  
} 
