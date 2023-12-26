#include <iostream>
#include "LinkListPoly.h"
using namespace std;

/*ʵ��һԪ����ʽ��ӣ��������LA*/ 
void PolyAdd(LinkListPoly &LA, LinkListPoly &LB) {
	/*pָ������LA����Ԫ���*/
	/*qָ������LB����Ԫ���*/ 
	Node *p, *q;
	/*p_preΪp��ǰ�����*/
	/*q_preΪq��ǰ�����*/ 
	Node *p_pre,*q_pre;
	Node *tmp;
	p_pre = LA.GetFirst();
	q_pre = LB.GetFirst();
	p = p_pre->next;
	q = q_pre->next;
	while(p != NULL && q != NULL) {
		/*p����,q����*/ 
		if(p->exp < q->exp) {
			p_pre = p;
			p = p->next;
		}
		/*p������q���뵽p֮ǰ��p_preָ��q��qָ��ԭλ�õ���һ�����*/
		else if(p->exp > q->exp) {
			tmp = q->next; 
			q_pre->next = q->next;
			q->next = p;
			p_pre->next = q;
			p_pre = q;
			q = tmp; 
		}
		/*ָ����ȣ��ϲ����p��q��ϵ��*/ 
		else if(p->exp == q->exp) {
			p->coef = p->coef + q->coef;
			if(p->coef == 0) {
			  /*ϵ��Ϊ0ʱ��ɾ��p*/
			  tmp = p;
			  p = p->next;
			  p_pre->next = p; 	
			  delete tmp;
			}
			/*ɾ��q*/
			tmp = q;
			q = q->next;
			q_pre->next = q;
			delete tmp;
		}
	}
	/*p��Ϊ�գ����q��Ϊ�գ���q���ӵ�p_pre�ĺ���*/
	/*��ʱpΪ�գ�p_pre��Ϊ��*/
	if(q != NULL) {
		p_pre->next = q;
	} 
}

int main() {
	int c1[4] = {-3, 8, -9, 100};
	int p1[4] = {0, 2, 4, 6};
	LinkListPoly LA(c1, p1, 4);
	cout<<"��һ������ʽΪ��"<<endl; 
	LA.PrintList();
	int c2[6]={7, 20, -8, 12, 30, 40};
	int p2[6]={0, 1, 2, 3, 6, 10};
	cout<<"�ڶ�������ʽΪ��"<<endl;
	LinkListPoly LB(c2, p2, 6);
	LB.PrintList();
	PolyAdd(LA, LB);
	cout<<"����Ժ�Ķ���ʽΪ��"<<endl;
	LA.PrintList();
	return 0;	
}
