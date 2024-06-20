#include "solution.h"
#include<iostream>

int main() {
    // Using createArray function create an array of size 5
    // Modify the array elements to be 1 2 3 4 5
    // Make sure to delete the array after using it
    int* array=createArray(5,10);
    deleteArray(array);
    int arr[]={1,2,3,4,5};
    int* Marray=copyArray(array,5);
    std::cout<<"Original Array"<<std::endl;
    for (int i=0;i<5;i++){
        std::cout<<array[i]<<" ";
    }
    reverseArray(Marray,5);
    std::cout<<"Reversed Array"<<std::endl;
    for (int i=0;i<5;i++){
        std::cout<<Marray[i]<<" ";
    }
    deleteArray(array);
    deleteArray(Marray);
    return 0;
}

