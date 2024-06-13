#include<iostream>
#include<memory>

// Write your solution here

class Polygon{
public:
    virtual double getArea() const = 0;
};

class Rectangle:public Polygon{
private:
    double length;
    double width;
public:
    Rectangle(double a,double b){
        length=a;
        width=b;
    }
    double getArea() const override{
        return length*width;
    }
};

class RightTriangle:public Polygon{
private:
    double height;
    double base;
public:
    RightTriangle(double a,double b){
        height=a;
        base=b;
    }
    double getArea() const override{
        return 0.5*base*height;
    }
};