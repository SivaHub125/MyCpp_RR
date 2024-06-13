#include<iostream>

class Rectangle {
private:
    double width;
    double height;
    // Write your code here
public:
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
