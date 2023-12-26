#include <iostream>
using namespace std;
#include "SharedStack.h"

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
    if(top1 + 1 == top2){
		throw "full, top";
	}
	if(i == 1){
		data[++top1] = x;
	}
	if(i == 2){
		data[--top2] = x;
	}

}

template <class ElemType>
ElemType SharedStack<ElemType>::Pop(int i) { 
    if((i == 1 && top1 == -1) || (i == 2 && top2 == StackSize)){
		throw "empty, down";
	}
	if(i == 1){
		return data[top1--];
	}
	if(i == 2){
		return data[top2++];
	}
}

template <class ElemType> 
ElemType SharedStack<ElemType>::GetTop(int i) {
	if((i == 1 && top1 == -1) || (i == 2 && top2 == StackSize)){
		throw "empty";
	}
	if(i == 1){
		return data[top1];
	}
	if(i == 2){
		return data[top2];
	}
}

template <class ElemType> 
int SharedStack<ElemType>::Empty(int i) {
	if(i == 1 && top1 == -1){
		return 1;
	}

	if(i == 2 && top2 == StackSize){
		return 1;
	}
	return 0;
} 
