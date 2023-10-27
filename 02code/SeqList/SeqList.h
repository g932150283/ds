#ifndef SEQLIST_H
#define SEQLIST_H

const int MaxSize = 100;

template <class ElemType>
class SeqList
{
private:
    /* data */
    ElemType data[MaxSize];
    int length;
public:
    SeqList(/* args */);
    SeqList(ElemType a[], int n);
    ~SeqList();
    int Length();
    ElemType Get(int i);
    int Locate(ElemType x);
    void Insert(int i, ElemType x);
    ElemType Delete(int i);
    void PrintList();
};
#endif