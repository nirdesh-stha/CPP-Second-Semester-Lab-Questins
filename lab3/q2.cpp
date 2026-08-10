#include<iostream>
using namespace std;

//operator overloading for unary operators

class Number{
    private:
        int num;
    public:
        void setdata(int n){
            num = n;
        }

        void operator-(){
            num = -num;
        }

        void operator--(){
            --num;
        }

        void operator--(int){
            num--;
        }

        void display(){
            cout<<"The number is: "<<num<<endl;
        }
};

int main(){
    Number n;
    n.setdata(5);
    -n;
    n.display();
    --n;
    n.display();
    n--;
    n.display();
    return 0;
}