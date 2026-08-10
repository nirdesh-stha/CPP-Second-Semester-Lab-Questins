#include<iostream>
using namespace std;

//example of constructor and destructor

class constructor{
    public:
        constructor(){
           cout<<"Constructor is called"<<endl;
        }

        ~constructor(){
            cout<<"Destructor is called"<<endl;
        }
};

int main(){
    constructor obj;
    return  0;
}