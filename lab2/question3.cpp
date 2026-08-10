#include<iostream>
using namespace std;
//default argument
int area(int l=5, int b=3){
    return (l*b);
}

int main(){
    cout<<"the area of the rectangle is "<<area()<<endl;
    cout<<"the area of the rectangle is "<<area(8,5);
    return 0;
}