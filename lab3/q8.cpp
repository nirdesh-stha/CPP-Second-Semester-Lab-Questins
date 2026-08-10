#include <iostream>
using namespace std;

//explicit constructor to avoid implicit conversion.

class Number {
private:
    int x;

public:
    explicit Number(int n) {
        x = n;
    }

    void display() {
        cout << "Value = " << x << endl;
    }
};

int main() {
    Number n1(100);
    Number n2(200);
    n1.display();
    n2.display();
    return 0;
}