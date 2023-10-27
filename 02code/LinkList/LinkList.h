#define LINKLIST_H

template <class ElemType>
struct Node{
    /* data */
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
    LinkList(/* args */);
    ~LinkList();
};


