#include<iostream>
using namespace std;
template <class T>
//Illustrate the use of function template.
T sum(T a, T b){
    return a+b;
}

int main(){
    int a, b;
    cout<<"enter the two numbers:";
    cin>>a>>b;
    cout<<"sum of the two numbers is:"<<sum(a, b)<<endl;
    cout<<"enter the two decimal numbers:";
    double c, d;
    cin>>c>>d;
    cout<<"sum of the two decimal numbers is:"<<sum(c, d)<<endl;
    return 0;
}