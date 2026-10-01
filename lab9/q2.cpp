#include<iostream>
using namespace std;
//illustrate the try-catch using constructor.
class divide{
    public:
        int a,b;
        divide(int x,int y){
            a=x;
            b=y;
            try{
                if(b==0){
                    throw b;
                }
                else{
                    cout<<"result="<<a/b<<endl;
                }
            }
            catch(int b){
                cout<<"error in divinding with 0"<<endl;
            }
        }
};

int main(){
    int a,b;
    cout<<"enter the two numbers:";
    cin>>a>>b;
    divide d(a,b);
    return 0;
}