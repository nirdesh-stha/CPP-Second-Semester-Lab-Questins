#include<iostream>
#include<cmath>
using namespace std;

int power(int x,int p=2){
    return pow(x,p);
}

int main(){
    int x,p;
    cout<<"enter the number and the power:"<<endl;
    cin>>x>>p;
    cout<<"the exponent is "<<power(x,p)<<endl;
    cout<<"the exponent is "<<power(x)<<endl;
    return 0;
}