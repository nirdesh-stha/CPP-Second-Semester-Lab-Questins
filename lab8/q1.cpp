#include<iostream>
using namespace std;
template <class T, class P>
//Illustrate the use of class template.
class student{
    public:
    T roll;
    P name;
    student(){
        cout<<"enter the roll and name of the student:";
        cin>>roll>>name;
    }
    void display(){
        cout<<"roll: "<<roll<<", name: "<<name<<endl;
    }
};

int main(){
    student<int, string> s;
    s.display();
    return 0;
}