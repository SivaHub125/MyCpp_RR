#pragma once
#include<iostream>
#include<algorithm>
// Write your solution here


int* createArray(size_t size,int initialValue){
    if(size==0){
        return nullptr;
    }
    int* arr=new int[size];
    for(int i=0;i<size;i++){
        arr[i]=initialValue;
    }
    return arr;
}
void deleteArray(int* array){
    delete[] array;
}
int* copyArray(const int* source,size_t size){
    if(size==0){
        return nullptr;
    }
    int* Array2 = new int[size];
    std::copy(source,source+size,Array2);
    return Array2;
}
void reverseArray(int* array,size_t size){
    std::reverse(array,array+size);
}