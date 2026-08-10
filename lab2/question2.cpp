#include<iostream>
using namespace std;
//to find area of square, rectangle and circlce using function overloading.
int area(int l){
    return (l*l);
}

int area(int l, int b){
    return (l*b);
}

double area(double r){
    return (3.14*r*r);
}

int main(){
    cout<<"the area of square is "<<area(5)<<endl;
    cout<<"the area of rectangle is "<<area(5,7)<<endl;
    cout<<"the area of circle is "<<area(5.5)<<endl;
    return 0;
}