// Define a class Student with private data members name, roll, marks. Write a member function to input and display details.
#include<iostream>
using namespace std;

class Student{
    string name;
    int roll;
    int marks;
    public:
        void getdata(){
            cout<<"enter the name, roll and marks of the student:";
            cin>>name>>roll>>marks;
        }
        void display(){
            cout<<"the name of the student is "<< name <<"roll no "<< roll << "marks is "<<marks;
        }
};

int main(){
    Student s;
    s.getdata();
    s.display();
    return 0;
}