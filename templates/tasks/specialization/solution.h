#pragma once

#include<iostream>

struct AccessCounter {
    int count = 0;
};

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
template<>
class Holder<AccessCounter>{
    public:
        AccessCounter counts;
        Holder(AccessCounter v){
            counts=v;
        }
        void setValue(AccessCounter v){
            counts=v;
        }
        AccessCounter getValue(){
            counts.count++;
            return counts;
        }
};
