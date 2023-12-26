#ifndef SEQLIST_H_
#define SEQLIST_H_

const int StackSize = 100;

template<class ElemType>
class SeqStack
{
private:
    ElemType data[StackSize];
    int top;
public:
    SeqStack();
    ~SeqStack();
    void Push(ElemType x);
    ElemType Pop();
    ElemType GetTop();
    int Empty();
};
#endif