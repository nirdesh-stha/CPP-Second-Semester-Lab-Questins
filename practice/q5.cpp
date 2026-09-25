#include<iostream>
using namespace std;

class number{
    int nu;
    public:
        void getdata(){
            cout<<"enter the no:";
            cin>>nu;
        }
        friend void display(number n);
};

void display(number n){
    cout<<"the no is "<<n.nu;
}
int main(){
    number n;
    n.getdata();
    display(n);
    return 0;
}