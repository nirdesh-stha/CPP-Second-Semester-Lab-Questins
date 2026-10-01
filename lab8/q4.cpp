#include<iostream>
using namespace std;

template <class T>
class Test {
    T a, b;

public:
    void input();
    void display();
};

template <class T>
void Test<T>::input() {
    cout << "Enter two numbers: ";
    cin >> a >> b;
}

template <class T>
void Test<T>::display() {
    cout << "Sum = " << a + b;
}

int main() {
    Test<int> t;
    t.input();
    t.display();
    return 0;
}