#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

int main(){
    int roll;
    string name;
    double marks;
    cout<<"enter the roll and nam of the student:";
    cin>>roll>>name;
    cout<<"enter the marks"<<endl;
    cin>>marks;
    ofstream file("file.dat");
    file<<left<<setw(10)<<roll;
    file<<name;
    file<<right<<setw(10)<<marks;
    file.close();
    return 0;
}