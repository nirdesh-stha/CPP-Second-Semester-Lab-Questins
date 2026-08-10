#include<iostream>
using namespace std;

//convert the class type into basic data type using member function.

class String{
    private:
        string str;
    public:
        void input(){
            cout<<"enter string:";
            cin>>str;
        }

        int getlen(){
            return str.length();
        }
};

int main(){
    String s1;
    int len;
    s1.input();
    len=s1.getlen();
    cout<<"length of string is:"<<len<<endl;
    return 0;

}