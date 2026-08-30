//Illustrate a virtual function
#include<iostream>
using namespace std;

class Shape{
    public:
    int l, b, r;
    virtual void area(){
        cout<<"Area of Shape"<<endl;
    }
};
class Rectangle:public Shape{
    public:
    void area(){
        cout<<"area of rectangle is "<<(5*4)<<endl;
    }
};
class Circle:public Shape{
    public:
        void area(){
            cout<<"Area of the circle is "<<(3.14*5*5)<<endl;
        }
};

int main(){
    Shape s;
    Rectangle r;
    s=&r;
    s->area();
    Circle c;
    s=&c;
    s->area();
    return 0;
}