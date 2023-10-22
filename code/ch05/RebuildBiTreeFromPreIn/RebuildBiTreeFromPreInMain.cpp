#include <stdio.h>
#include "BiTree.cpp"
#define NodesLength 6
using namespace std;
int main() {
	int i;
    char preOrder[NodesLength] = {'A', 'B', 'D', 'C', 'E', 'F'};
    char inOrder[NodesLength] = { 'D', 'B', 'A', 'E', 'C', 'F'};
    BiTree<char> T(preOrder, inOrder, NodesLength);
    cout<<"�ؽ�������ʹ�õ�ǰ������Ϊ��";
	for(i = 0; i < NodesLength; i++)
		cout<<preOrder[i]<<" ";
	cout<<endl;
	cout<<"�ؽ�������ʹ�õ���������Ϊ��";
	for(i = 0; i < NodesLength; i++)
		cout<<inOrder[i]<<" ";
	cout<<endl;
    cout<<"�����ؽ��Ķ������ĺ�������Ϊ��";
    T.PostOrder();
    cout<<endl;
    cout<<"�����ؽ��Ķ�������ǰ������Ϊ��";
    T.PreOrder();
    cout<<endl;
    cout<<"�����ؽ��Ķ���������������Ϊ��";
    T.InOrder();
    cout<<endl;
    return 0;
}