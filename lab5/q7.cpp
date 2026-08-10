#include<iostream>
using namespace std;

//heirarchial inheritance

class Number{
    public:
        int num, num1;
        Number(){
            cout<<"enter 2 numbers: ";
            cin>>num>>num1;
        }
};

class Sum: public Number{
    public:
        Sum(){
            cout<<"The sum is "<<num+num1<<endl;
        }
};

class Multiply: public Number{
    public:
        Multiply(){
            cout<<"The multiplication is "<<num*num1<<endl;
        }
};

int main(){
    Sum s;
    Multiply m;
    return 0;
}