#include<iostream>
using namespace std;

//Example of Order of constructor and destructor 

class AA{
    public:
        AA(){
            cout<<"Constructor A "<< endl;
        }

        ~AA(){
            cout<<"Destructor A "<< endl;
        }
};
class BB{
    public:
        BB(){
            cout<<"Constructor B "<< endl;
        }

        ~BB(){
            cout<<"Destructor B "<< endl;
        }
};
class CC:public AA,public BB{
    public:
        CC(){
            cout<<"Constructor C "<< endl;
        }

        ~CC(){
            cout<<"Destructor C "<< endl;
        }
};

int main(){
    CC obj;
    return 0;
}