#include<iostream>
using namespace std;

class Base{
    public:
        int num=4, num1=5;
};

class publicD: public Base{
    public:
        publicD(){
            cout<<"The public sum is "<<num+num1<<endl;
        }
};

class privateD: private Base{
    public:
        privateD(){
            cout<<"The private sum is "<<num+num1<<endl;
        }
};

class protectedD: protected Base{
    public:
        protectedD(){
            cout<<"The protected sum is "<<num+num1<<endl;
        }
};

int main(){
    publicD p1;
    privateD p;
    protectedD p2;
    return 0;
}