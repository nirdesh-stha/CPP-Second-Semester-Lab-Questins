#include<iostream>
#include<string>
using namespace std;

// Define a class for performing string operations

class String{
    private:
        string str;

    public:
        void input(){
            cout << "Enter a string: ";
            cin>>str;
        }

        void operator+(String s){
            string str1 = str + s.str;
            cout << "Concatenated string: " << str1 << endl;
        }

        void operator=(String s){
            str = s.str;
        }

        void operator>(String s){
            if(str.length() > s.str.length()){
                cout<<str<< " is greater than "<< s.str<< endl;
            }
            else{
                cout<<str<< " is not greater than "<<s.str<< endl;
            }
        }

        void display(){
            cout << str << endl;
        }
};

int main(){
    String s1, s2, s3;
    s1.input();
    s2.input();
    s1 + s2;
    s3 = s1;
    s3.display();
    s1 > s2;
    return 0;
}