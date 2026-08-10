#include <iostream>
using namespace std;

// Define a class for performing addition and subtraction of two numbers

class Number {
private:
    int num;

public:
    Number(int n = 0) {
        num = n;
    }

    Number operator+(Number obj) {
        Number temp;
        temp.num = num + obj.num;
        return temp;
    }

    Number operator-(Number obj) {
        Number temp;
        temp.num = num - obj.num;
        return temp;
    }

    void display() {
        cout << "Result = " << num << endl;
    }
};

int main() {
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    Number n1(a), n2(b);
    Number sum = n1 + n2;
    Number diff = n1 - n2;
    cout << "\nAddition: ";
    sum.display();
    cout << "Subtraction: ";
    diff.display();
    return 0;
}