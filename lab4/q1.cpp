#include<iostream>
using namespace std;

//Example of default constructor, parameterized constructor and copy constructor.

class Number{
    private:
        int num;
    public:
        Number(){
            cout<<"This is a default constructor "<< endl;
        }

        Number(int n){
            num=n;
            cout<<"This is a parameterized constructor and the number is "<< num<< endl;
        }

        Number(Number &obj){
            num = obj.num;
            cout<<"This is a copy constructor and the number is "<< num<< endl;
        }
};

int main(){
    Number n1;
    Number n2(5);
    Number n3(n2);
    return 0;
}