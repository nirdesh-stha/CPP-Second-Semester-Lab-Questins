#include<iostream>
using namespace std;
//example of static function

class Counter{
    public:
        static int count;
        static void countt(){
            for(int i=0;i<5;i++){
                cout<<count++<<endl;
            }
        }
};
int Counter::count=1000;

int main(){
    Counter::countt();
    return 0;
}