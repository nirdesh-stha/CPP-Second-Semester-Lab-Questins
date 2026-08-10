#include<iostream>
using namespace std;

//convert the basic data type into class type using constructor.

class Distance{
    private:
        int meter;
        int centimeter;
    public:
        Distance(int cm){
            meter=cm/100;
            centimeter=cm%100;
        }

        void display(){
            cout<<"distance in meter:"<<meter<<endl;
            cout<<"distance in centimeter:"<<centimeter<<endl;
        }
};

int main(){
    int cm ;
    cin>>cm;
    Distance d1 = cm;
    d1.display();
    return 0;
}