#include <iostream>
using namespace std;
int main()
{
    int num = 5;
    cout << "Value: " << num << endl;
    // address of operator-&
    cout << "Address of num=" << &num << endl;
    int *ptr = &num;
    cout << "Address:" << ptr << endl;
    cout << "Value:" << *ptr << endl;
    double d = 4.3;
    double *p = &d;
    char c = '#';
    char *p1 = &c;
    cout << "Address:" << p << endl;
    cout << "Value:" << *p << endl;
    cout << "Size of integer: " << sizeof(num) << endl;
    cout << "Size of pointer: " << sizeof(ptr) << endl;
    cout << "Size of double: " << sizeof(d) << endl;
    cout << "Size of double pointer: " << sizeof(p) << endl;
    cout << "Size of char: " << sizeof(c) << endl;
    cout << "Size of char pointer: " << sizeof(p1) << endl;
}