#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string b;
    ifstream file("file.txt");
    getline(file, b);
    cout<<b;
    file.close();
    return 0;
}