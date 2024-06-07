#include <iostream>
using namespace std;
class complex {
private:
    double real;
    double imaginary;
public:
    complex(double r = 0, double i = 0){  real=r;
    imaginary=i; }
    void show() const {
        cout << real << " + " << imaginary << "i";
    }
    complex operator+(complex other) const {
        return complex(real + other.real, imaginary + other.imaginary);
    }
};
int main() {
    complex ob1(3, 4);
    complex ob2(5, -2);
    cout << "ob1: ";
    ob1.show();
    cout << endl;
    cout << "ob2: ";
    ob2.show();
    cout << endl;
    complex sum = ob1 + ob2;
    cout << "Sum: ";
    sum.show();
    cout << endl;
    return 0;
}

