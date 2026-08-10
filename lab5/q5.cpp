#include<iostream>
using namespace std;

//example of multilevel inheritance

class Number{
    public:
        int num;
        Number(){
            cout<<"enter a number: ";
            cin>>num;
        }
};

class Num2: public Number{
    public:
        void display(){
            cout<<"The number is: "<<num<<endl;
        }
};

class square: public Num2{
    public:
        void displayy(){
            cout<<"The square of the number is: "<<num*num<<endl;
        }
};

int main(){
    square s;
    s.display();
    s.displayy();
    return 0;
}