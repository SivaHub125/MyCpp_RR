#include<iostream>

template<class T>
class Holder
{
    public:
        T value;
    Holder(T v){
        value=v;
    }
    T getValue(){
        return value;
    }
    void setValue(T v){
        value=v;
    }
};

// Write your solution here
