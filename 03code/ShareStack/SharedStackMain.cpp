#include <iostream>
using namespace std;
#include "SharedStack.cpp"

int main() {    
    SharedStack<int> S; 
	if(S.Empty(1) == 1)
		cout<<"1空"<<endl;
	else
        cout<<"1不空"<<endl;
	if(S.Empty(2) == 1)
		cout<<"2空"<<endl;
	else
        cout<<"2不空"<<endl;
    cout<<"在栈1中加1"<<endl;
	S.Push(1, 1);
	cout<<"在栈1中加3"<<endl;
	S.Push(1, 3);
	cout<<"在栈1中加5"<<endl;
	S.Push(1, 5);
	cout<<"在栈1中加2"<<endl;
	S.Push(2, 2);
	cout<<"在栈2中加4"<<endl;
	S.Push(2, 4);
	cout<<"在栈2中加6"<<endl;
	S.Push(2, 6);
	cout<<"取栈1栈顶"<<endl; 
	cout<<S.GetTop(1)<<endl;  
	cout<<"取栈2栈顶:"<<endl; 
	cout<<S.GetTop(2)<<endl;  
	cout<<"1出栈"<<endl;
	S.Pop(1);
    cout<<"取栈1 顶:"<<endl; 
	cout<<S.GetTop(1)<<endl;  
	cout<<"2 出栈"<<endl;
	S.Pop(2);
    cout<<"取2 栈顶:"<<endl; 
	cout<<S.GetTop(2)<<endl;  
	return 0;
}

