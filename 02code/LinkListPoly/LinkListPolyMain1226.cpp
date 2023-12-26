#include <iostream>
#include "LinkListPoly1226.h"
using namespace std;

void PolyAdd(LinkListPoly &LA, LinkListPoly &LB) {
	Node *p, *q;
	Node *p_pre,*q_pre;
	Node *tmp;
	p_pre = LA.GetFirst();
	q_pre = LB.GetFirst();
	p = p_pre->next;
	q = q_pre->next;
	while(p != NULL && q != NULL) {
		if(p->exp < q->exp) {
			p_pre = p;
			p = p->next;
		}
		else if(p->exp > q->exp) {
			tmp = q->next; 
			q_pre->next = q->next;
			q->next = p;
			p_pre->next = q;
			p_pre = q;
			q = tmp; 
		}
		else if(p->exp == q->exp) {
			p->coef = p->coef + q->coef;
			if(p->coef == 0) {
			  tmp = p;
			  p = p->next;
			  p_pre->next = p; 	
			  delete tmp;
			}
			tmp = q;
			q = q->next;
			q_pre->next = q;
			delete tmp;
		}
	}
	if(q != NULL) {
		p_pre->next = q;
	} 
}

/*
LA:
-3 + 8X^2 + -9X^4 + 100X^6
LB:
7 + 20X^1 + -8X^2 + 12X^3 + 30X^6 + 40X^10
LA + LB:
4 + 20X^1 + 12X^3 + -9X^4 + 130X^6 + 40X^10
*/
void PolyAdd1(LinkListPoly &LA, LinkListPoly &LB){
	Node *p, *q, *ppre, *qpre;
	ppre = LA.GetFirst();
	qpre = LB.GetFirst();
	p = ppre->next;
	q = qpre->next;
	if(q == NULL ){
		return;
	}
	if(p == NULL ){
		LA = LB;
	}
	while (p!=NULL && q!=NULL){
		// 1 + X 情况，直接后移
		if(p->exp < q->exp){
			ppre = p;
			p = p->next;
		}else if(p->exp > q->exp){
			// x + 1 情况，直接插到前面,结点并没有删除
			//    (ppre)0    (p)0   0  
			//    (qpre)0    (q)0   0
			// 
			//          0       (p)0      0  
			//    (qpre)0    (ppre)0   (q)0
			Node *temp = q->next;
			qpre->next = q->next;
			q->next = p;
			ppre->next = q;
			ppre = q;
			q = temp;
		}else if(p->exp == q->exp){
			// x + x 情况，直接计算
			p->coef = p->coef + q->coef;
			if (p->coef == 0){
				Node *temp = p;
				p = p->next;
				ppre->next = p;
				delete temp;
			}
			Node *temp = q;
			q = q->next;
			qpre->next = q;
			delete temp;
		}
	}
	if(q!=NULL){
		ppre->next = q;
	}
	
}

int main() {
	int c1[4] = {-3, 8, -9, 100};
	int p1[4] = {0, 2, 4, 6};
	LinkListPoly LA(c1, p1, 4);
	cout<<"LA:"<<endl; 
	LA.PrintList();
	int c2[6]={7, 20, -8, 12, 30, 40};
	int p2[6]={0, 1, 2, 3, 6, 10};
	cout<<"LB:"<<endl;
	LinkListPoly LB(c2, p2, 6);
	LB.PrintList();
	/*
	PolyAdd(LA, LB);
	LA + LB:
	4 + 20X^1 + 12X^3 + -9X^4 + 130X^6 + 40X^10
	*/
	PolyAdd1(LA, LB);
	cout<<"LA + LB:"<<endl;
	LA.PrintList();
	return 0;	
}
