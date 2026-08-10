#include<iostream>
using namespace std;

//single inheritance

class Number{
    public:
        int num;
        Number(){
            cout<<"Enter a number: ";
            cin>>num;
        }
};

class Num2: public Number{
    public:
        void display(){
            cout<<"The number is: "<<num<<endl;
        }
};
int main(){
    Num2 n;
    n.display();
    return 0;
}
