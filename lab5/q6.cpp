#include<iostream>
using namespace std;

//example of multiple inheritance

class Number{
    public:
        int num;
        Number(){
            cout<<"enter a number: ";
            cin>>num;
        }
};

class num1{
    public:
        int num2;
        num1(){
            cout<<"enter a number: ";
            cin>>num2;
        }
};

class sum: public Number, public num1{
    public:
        void display(){
            cout<<"The sum of the numbers is: "<<num+num2<<endl;
        }
};

int main(){
    sum s;
    s.display();
    return 0;
}