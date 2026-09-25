#include<iostream>
using namespace std;

class Number{
    
    public:
    int n;
        void setdata(){
            cout<<"enter a number:";
            cin>>n;
        }
        virtual void getdata(){
            cout<<"no: "<<n;
        }
};

class Num:public Number{
    public:
    void getdata(){
        cout<<"no is "<< n;
    }
};

int main(){
    Number *n1;
    Num n;
    n.setdata();
    n1=&n;
    n1->getdata();
    return 0;
}