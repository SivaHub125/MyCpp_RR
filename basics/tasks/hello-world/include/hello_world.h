#include <iostream>
#include <string>
using namespace std;

static void printHelloWorld() {
    string name;
    getline(cin,name,'\n');
    cout<<"Hello, World!"<<endl;
    cout<<name<<endl;
}
