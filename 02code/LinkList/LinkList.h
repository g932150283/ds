#define LINKLIST_H

template <class ElemType>
struct Node{
    ElemType data;
    Node<ElemType> * next;
};

template <class ElemType>
class LinkList
{
private:
    /* data */
    //头指针
    Node<ElemType> * first;
public:
    LinkList();
    LinkList(ElemType a[], int n);
    ~LinkList();
    int Length();
    ElemType Get(int i);
    Node<ElemType> * GetFirst();
    // Node<ElemType> *GetFirst();
    int Locate(ElemType x);
    void Insert(int i, ElemType x);
    ElemType Delete(int i);
    void PrintList();
    void Invert();
    int Seq();
    void Sort();
    
};


