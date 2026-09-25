// Write a class hierarchy: Animal → Dog → Puppy (multilevel inheritance) with constructors in each, and show the order of constructor/destructor calls.
#include<iostream>
using namespace std;

class Animal{
    public:
        string name;
        Animal(){
            cout<<"this is constructor for animal"<<endl;
        }
        ~Animal(){
            cout<<"animal destructor"<<endl;
        }
};

class Dog:public Animal{
    public:
        Dog(){
            cout<<"constructor for dog"<<endl;
        }
        ~Dog(){
            cout<<"destructor for dog"<<endl;
        }
};

class Puppy: public Dog{
    public:
        Puppy(){
            cout<<"constructor for Puppy"<<endl;
        }
        ~Puppy(){
            cout<<"destructor for Puppy"<<endl;
        }
};

int main(){
    Puppy p;
    return 0;
}