#include<iostream>
using namespace std;

class animal{
    public:
    virtual void sound(){
        cout<<"soundd";
    }
};

class dog:public animal{
    public:
    void sound(){
        cout<<"bark";
    }
};

int main(){
    animal *A;
    dog D;
    A=&D;
    A->sound();
    return 0;
}