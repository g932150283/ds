#ifndef LINKLISTPOLY_H
#define LINKLISTPOLY_H

struct Node{
	float coef;	
	int exp; 
	Node *next;
};

class LinkListPoly{
public:
	LinkListPoly();
	LinkListPoly(int c[], int e[], int n);
	~LinkListPoly();
	void PrintList();
	Node *GetFirst();
private:
	Node *first;
};
#endif
