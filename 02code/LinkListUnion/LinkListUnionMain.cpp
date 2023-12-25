#include <iostream>
using namespace std;
#include "LinkList.cpp"

template <class ElemType>
int Union(LinkList<ElemType> &L1, LinkList<ElemType> &L2){
	Node<ElemType> *r = L1.GetFirst();
	Node<ElemType> *p = L1.GetFirst()->next;
	Node<ElemType> *q = L2.GetFirst()->next;
	while (p != NULL){
		/* code */
	}
	
}
void outResult(int flag) {
	if(flag) {
		cout<<"is equal"; 
	}
	else {
		cout<<"is not equal"; 
	}
	cout<<endl;
}
int main() {
	int s1[] = {1, 3, 5, 7, 9};
	int s2[] = {1, 3, 5, 7, 9};
	int s3[] = {2, 4, 6, 8, 10, 12};
	int s4[] = {2, 4, 6, 8, 10, 12, 14, 16}; 
	int s5[] = {1, 3, 6, 8, 10};
	LinkList<int> L1(s1, 5);
    LinkList<int> L2(s2, 5);
    LinkList<int> L3(s3, 6);
    LinkList<int> L4(s4, 8);
    LinkList<int> L5(s5, 5);
    cout<<"L1 : ";
    L1.PrintList();
    cout<<"L2 : ";
    L2.PrintList();
    cout<<"L3 : ";
    L3.PrintList();
    cout<<"L4 : ";
    L4.PrintList();
    cout<<"L5 : ";
    L5.PrintList();
    cout<<"L1&L2 : ";
	outResult(SetIsEqual(L1,L2));
    cout<<"L3&L4 : ";
	outResult(SetIsEqual(L3,L4));
    cout<<"L2&L5 : ";
	outResult(SetIsEqual(L2,L5));
	cout << L1.Locate(1) << " " <<L1.Locate(4) << " " << L1.Locate(9) << endl;
	return 0;
}
