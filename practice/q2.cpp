#include<iostream>
using namespace std;

class Number{
    int n;
    public:
        Number(){
            cout<<"this is a default constructor"<<endl;
        }
        Number(int num){
            n=num;
            cout<<"this is a parametarized constructor"<<endl;
            cout<<"the number is "<<n<<endl;
        }
        Number(Number &obj){
            n=obj.n;
            cout<<"this is a copy constructor"<<endl;
            cout<<"the number is "<<n;
        }
};

int main(){
    Number n;
    Number n1(5);
    Number n2(n1);
    return 0;
}