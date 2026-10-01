#include<iostream>
using namespace std;
//Illustrate the function template overloading.

template <class T>
T sum(T a, T b){
    return a+b;
}

template <class T>
T sum(T a, T b, T c){
    return a+b+c;
}

int main(){
    int a,b,c;
    cout<<"enter the three numbers:";
    cin>>a>>b>>c;
    cout<<"sum of the two numbers is:"<<sum(a, b)<<endl;
    cout<<"sum of the three numbers is:"<<sum(a, b, c)<<endl;
    return 0;
}