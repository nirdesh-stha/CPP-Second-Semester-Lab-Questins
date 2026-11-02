#include<iostream>
using namespace std;

class animal{
    public:
    virtual void sound()=0;
};

class dog:public animal{
    public:
    void sound(){
        cout<<"bark";
    }
};

int main(){
    dog d;
    d.sound();
    return 0;
}