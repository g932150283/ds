#include "SeqList.h"

#include <iostream>
using namespace std;
template <class ElemType>
SeqList<ElemType>::SeqList(){
    length = 0;
}

template <class ElemType>
SeqList<ElemType>::SeqList(ElemType a[], int n){
    for(int i = 0; i < n; i++){
        data[i] = a[i];
    }
    length = n;
}
template <class ElemType>
SeqList<ElemType>::~SeqList() {
}



template <class ElemType>
void SeqList<ElemType>::PrintList(){
    cout << "length = " << length << endl;
}