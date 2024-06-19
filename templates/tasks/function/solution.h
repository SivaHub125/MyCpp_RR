#pragma once
#include<iostream>
// Write your solution here
template <class T>
T Max(T a,T b){
    return (a>b)? a:b; 
}
/*
Point Max(Point a,Point b){
    int dA=a.x*a.x+a.y*a.y;
    int dB=b.x*b.x+b.y*b.y;
    return (dA>dB)?a:b;
}
int Max(int a,int b){
    return (a>b) ? a:b;
}
float Max(float a,float b){
    return (a>b)?a:b;
}
char Max(char a,char b){
    return (a>b)?a:b;
}
*/