#include<iostream>
using namespace std;

class Number{
    public:
        int n=5;
        virtual void num()=0;
};

class Num: public Number{
    public:
        void num(){
            cout<<"the number is "<<n;
        }
};

int main(){
    Number n;
    Num nu;
    n=&nu;
    n->num();
    return 0;
}