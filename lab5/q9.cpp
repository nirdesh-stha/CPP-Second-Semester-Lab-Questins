#include<iostream>
using namespace std;

class Base{
    public:
        int num, num1, s;
        void base(){
            cout<<"Enter 2 numbers: ";
            cin>>num>>num1;
        }
        void base(int a, int b){
            num=a;
            num1=b;
        }
        void display(){
            cout<<"hides this"<<endl;
        }
};  

class Derived: public Base{
    public:
        void sum(){
            s=num+num1;
        }
        void display(){
            cout<<"The sum is "<<s<<endl;
        }
};

int main(){
    Derived d;
    Derived d1;
    d.base();
    d.sum();
    d.display();
    d1.base(5, 10);
    d1.sum();
    d1.display();
    d.Base::display();
    return 0;
}

