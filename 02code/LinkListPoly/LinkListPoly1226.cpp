#include <iostream>
using namespace std;
#include "LinkListPoly1226.h"

LinkListPoly::LinkListPoly() {
	first = new Node;
	first->next=NULL;
}

LinkListPoly::LinkListPoly(int c[], int e[], int n) {
	Node *r,*s;
	first = new Node;
	r = first;
	for(int i = 0; i < n; i++) {
		s = new Node;
		s->coef = c[i];
		s->exp = e[i];
		r->next = s;
		r = s;
	}
	r->next = NULL;
}

LinkListPoly::~LinkListPoly() {
	Node *q = NULL;
	while(first != NULL) {
		q = first;
		first = first->next;
		delete q;
	}
}

Node *LinkListPoly::GetFirst() {
	return first;
}

void LinkListPoly::PrintList() {
	// Node *p = first->next;
	// int count = 0;
	// while(p != NULL) {
	// 	if(count != 0 && p->coef > 0) {
	// 		cout<<"+";
	// 	}
	// 	cout<<p->coef;
	// 	if(p->exp != 0) {
	// 		cout<<"X";
	// 		if(p->exp != 1) {	
	// 			cout<<p->exp;
	// 	    }
	// 	}
	// 	p = p->next;
	// 	count++;
	// }
	// cout<<endl;
	Node *q = first;
    if(q == NULL){
        // 链表为空
        cout << "NULL LinkList" << endl;
    }else{
        // 链表不为空
        q = q->next;
        while (q != NULL){
            // 系数不为零，并且后续不为空
            if(q->coef != 0 && q->next != NULL){
                cout << q->coef;
                if(q->exp == 0){
                    cout << " + ";
                }else{
                    cout << "X^" << q->exp << " + ";
                }
            // 系数不为零，并且后续为空
            }else if(q->coef != 0 && q->next == NULL){
                cout << q->coef;
                if(q->exp == 0){
                    cout << endl;
                }else{
                    cout << "X^" << q->exp << endl;
                }
            }
			q = q->next;
        }
        
    }
}
