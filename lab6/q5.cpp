#include<iostream>
using namespace std;

class Shape{
    public:
        int l, b;
        virtual void area()=0;
};

class Rectangle:public Shape{
    public:
    Rectangle(int length, int breadth){
        l=length;
        b=breadth;
    }
        void area(){
            cout<<"area of rectangle is "<<(l*b);
        }
};

int main(){
    Shape *s;
    // shape s; this is forbidden
    Rectangle r(5,4);
    s=&r;
    s->area();
    return 0;
}