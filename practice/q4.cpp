#include<iostream>
using namespace std;

class Num{
    public:
        int n;
        void getno(){
            cout<<"enter a no:";
            cin>>n;
        }
};

class num{
    public:
        int n1;
        void getno(){
            cout<<"enter a no:";
            cin>>n1;
        }
};

class sum:public Num, public num{
    public:
        int su=0;
        sum(){
            Num::getno();
            num::getno();
            su=n+n1;
            cout<<"the sum is: "<<su;
        }
};
int main(){
    sum s;
    return 0;
}