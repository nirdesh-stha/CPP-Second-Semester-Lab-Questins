#include<iostream>
using namespace std;

// Sphere
double volume(double r){
    return (4*3.14*r*r*r)/3;
}

// Cone
double volume(double r,double h){
    return (3.14*r*r*h)/3;
}

// Cylinder
double volume(double r,double h,int){
    return 3.14*r*r*h;
}

int main(){

    cout<<"Sphere = "<<volume(6)<<endl;
    cout<<"Cone = "<<volume(5,7)<<endl;
    cout<<"Cylinder = "<<volume(2.9,3.6,1)<<endl;

    return 0;
}