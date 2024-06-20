#include<iostream>
#include <limits>

void solution() {
    // Write your solution here
    double num1;
    double num2;
    std::cout<<"Enter the first number: ";
    std::cin>>num1;
    if (std::cin.fail()) {
        std::cout << "Invalid input. Please enter a valid number."<<std::endl;
    }
    else{
        std::cout<<"Enter the second number: ";
        std::cin>>num2;
        if (std::cin.fail()) {
            std::cout << "Invalid input. Please enter a valid number."<<std::endl;
        }
        else{
            std::cout<<"Sum: "<<num1+num2<<std::endl;
            std::cout<<"Difference: "<<num1-num2<<std::endl;
            std::cout<<"Product: "<<num1*num2<<std::endl;
            if(num2==0){
                std::cout<<"Division by zero error!"<<std::endl;
            }
            else{
                std::cout<<"Quotient: "<<num1/num2<<std::endl;
            }
        }
    }
}
