// #include<iostream>
// using namespace std;

// Diamond problem in C++

// class Base{
//     public:
//         int n, n1;

// };

// class Child1: public Base{
//     public:
//         void getdata(){
//             cout<<"Enter a number: ";
//             cin>>n;
//         }
// };

// class child2: public Base{
//     public:
//         void getdata1(){
//             cout<<"Enter another number: ";
//             cin>>n1;
//         }
// };

// class child3: public Child1, public child2{
//     public:
//         void sum(){
//             cout<<"The sum is "<<n+n1<<endl;
//         }
// };

// int main(){
//     child3 c;
//     c.getdata();
//     c.getdata1();
//     c.sum();
//     return 0;
// }


// solution of diamond problem 

#include<iostream>
using namespace std;

class Base{
    public:
        int n, n1;

};

class Child1: public Base{
    public:
        void getdata(){
            cout<<"Enter a number: ";
            cin>>n;
        }
};

class Child2: public Base{
    public:
        void getdata1(){
            cout<<"Enter another number: ";
            cin>>n1;
        }
};

class Child3: public Child1, public Child2 {
    public:
        void sum(){
            cout<<"The sum is "<<Child1::n + Child2::n1<<endl;
        }
};

int main(){
    Child3 c;
    c.Child1::getdata();
    c.Child2::getdata1();
    c.sum();
    return 0;
}