#ifndef SHAREDSTACK_H
#define SHAREDSTACK_H
const int StackSize = 100; 
template <class ElemType> 
class SharedStack{
public:
    SharedStack(); 
	~SharedStack(); 
    void Push(int i, ElemType x); 
    ElemType Pop(int i); 
    ElemType GetTop(int i); 
	int Empty(int i); 
private:
    ElemType data[StackSize]; 
    int top1; 
	int top2; 
};
#endif
