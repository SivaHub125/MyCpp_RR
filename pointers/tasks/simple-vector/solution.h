#pragma once
#include<iostream>
// Your solution here

class IntVector{
    int* arr; 
    int capacity;
    int current;
    public:
        IntVector(){
            arr=new int[1];
            capacity=1;
            current=0;
        }
        ~IntVector(){
            delete[] arr;
        }
        void push_back(int value){
            if(current==capacity){
                int* temp=new int[2*capacity];
                for(int i=0;i<capacity;i++){
                    temp[i]=arr[i];
                }
                delete[] arr;
                capacity=capacity*2;
                arr=temp;
            }
            arr[current]=value;
            current++;
        }
        size_t size(){
            return current;
        }
        int at(size_t index){
            if(index<current)
                return arr[index];
            else
                throw std::out_of_range(" ");
            
        }
};