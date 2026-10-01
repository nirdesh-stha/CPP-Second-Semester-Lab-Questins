#include<iostream>
using namespace std;
//Illustrate the try-catch.
int main(){
    int a,b;
    cout<<"enter the two numbers:";
    cin>>a>>b;
    try{
        if(b==0){
            throw b;
        }
        else{
            cout<<"result="<<a/b<<endl;
        }
    }
    catch(int x){
        cout<<"error in divinding with 0"<<endl;
    }
    return 0;
}