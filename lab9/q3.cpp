#include<iostream>
using namespace std;
//illustrate the try-catch using constructor.
int main(){
    int age;
    cout<<"enter the age:";
    cin>>age;
    try{
        if(age>18){
            cout<<"you are eligible for voting"<<endl;
        }
        else{
            throw age;
        }
    }
    catch( int age){
        cout<<"Exception: you are not eligible for voting"<<endl;
    }
    return 0;
}