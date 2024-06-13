#include<iostream>

class Rectangle {
private:
    double width;
    double height;
    // Write your code here
public:
    Rectangle(){
        std::cout<<"Rectangle created with default dimensions."<<std::endl;
    }
    Rectangle(double w,double h){
        std::cout<<"Rectangle created with custom dimensions."<<std::endl;
        height=h;
        width=w;
    }
    ~Rectangle(){
        std::cout<<"Deleting rectangle."<<std::endl;
    }
    void printDimensions(){
        std::cout<<"Width: "<<width<<", Height: "<<height<<std::endl;
    }
    void setWidth(double num){
        if(num<=0){
            width=0;
        }
        else{
            width = num;
        }
    }
    void setHeight(double num){
        if(num<=0){
            height=0;
        }
        else{
            height=num;
        }
    }
    double getArea(){
        return height*width;
    }
    double getPerimeter(){
        return 2*(height+width);
    }
};