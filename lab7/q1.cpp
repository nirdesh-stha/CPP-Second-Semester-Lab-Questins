#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream file("file.txt");
    cout<<"writing on the file"<<endl;
    file<<"This is file handling";
    file.close();
    return 0;
}