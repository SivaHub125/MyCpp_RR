#pragma once
#include<iostream>
// Your solution here

template<class T> class SimpleUniquePtr{
    private:
        T* pointer{};
    public:
        SimpleUniquePtr(T* p=nullptr){
            pointer=p;
        }
        ~SimpleUniquePtr(){
            delete pointer;
        }
        SimpleUniquePtr(SimpleUniquePtr&& other){
            pointer=other.pointer;
            other.pointer=nullptr;
        }
        SimpleUniquePtr& operator=(SimpleUniquePtr&& other){
            if(this!=&other){
                delete pointer;
                pointer=other.pointer;
                other.pointer=nullptr;
            }
            return *this;
        }
        SimpleUniquePtr(SimpleUniquePtr&)=delete;
        SimpleUniquePtr& operator=(SimpleUniquePtr&) =delete;
        T& operator*(){
            return *pointer; 
        }
        T* operator->(){
            return pointer;
        }
        T* get(){
            return pointer;
        }
};