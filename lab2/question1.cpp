#include<iostream>
using namespace std;
//to calculate time in minutes using function overloading.
int time(int hr, int min, int sec){
    min=(hr*60)+(sec/60)+min;
    return min;
}

int time(int min, int sec){
     min=(sec/60)+min;
     return min;
}

int main(){
    cout<<"the time in min is "<<time(10,20,10)<<endl;
    cout<<"the time in min is "<<time(20, 30);
    return 0;
}