#include<iostream>
using namespace std;

class Base{
    public:
        int n;
        void setdata(){
            cout<<"enter a no:";
            cin>>n;
        }
        virtual void display(){
            cout<<"display";
        }
};
class Derived: public Base{
    public:
        void display() override{
            cout<<"the number is "<<n;
        }
};

int main(){
    Base *b;
    Derived d;
    d.setdata();
    b=&d;
    b->display();
    return 0;
}