#include"SeqStack.cpp"
#include<bits/stdc++.h>

using namespace std;

int main(){

    int arr[] = {1, 2, 3, 4, 5};
    SeqStack<int> stack;
    cout << "stack.empty() = " << stack.Empty() << endl;
    for (int i = 0; i < 5; i++){
        stack.Push(arr[i]);
    }
    cout << "Pop: " << endl;
    for(int i = 0; i < 5; i++){
        int x = stack.Pop();
        cout << x << " ";
    }
    cout << endl;
    return 0;
}