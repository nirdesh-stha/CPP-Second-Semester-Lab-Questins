#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string s;
    char b;
    cout<<"enter the string:";
    cin>>s;

    ofstream file("fil.dat");
    for(int i=0; i<s.length(); i++){
        file.put(s[i]);
    }
    file.close();
    ifstream fil("fil.dat");
     while (fil.get(b)){
        cout << b;
    }
    fil.close();
    return 0;
}