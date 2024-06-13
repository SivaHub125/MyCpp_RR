#include<iostream>
#include <limits>
using namespace std;

void solution() {
    // Write your solution here
    // Hint: Check what is std::cin.fail()
    double num1;
    double num2;
    cout<<"Enter the first number: ";
    cin>>num1;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout << "Invalid input. Please enter a valid number."<<endl;
    }
    else{
        cout<<"Enter the second number: ";
        cin>>num2;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout << "Invalid input. Please enter a valid number."<<endl;
        }
        else{
            cout<<"Sum: "<<num1+num2<<endl;
            cout<<"Difference: "<<num1-num2<<endl;
            cout<<"Product: "<<num1*num2<<endl;
            if(num2==0){
                cout<<"Division by zero error!"<<endl;
            }
            else{
                cout<<"Quotient: "<<num1/num2<<endl;
            }
        }
    }
}
