#include <iostream>
using namespace std;

int main() {
    int* ptr;
    ptr = new int;

    cout << "Integer address: " << ptr << endl;
    cout << "Pointer address: " << &ptr << endl;

    *ptr = 2401;

    cout << endl;
    for (size_t i = 0; i < 10; i++) {
        ++(*ptr);
        cout << *ptr << " is stored at " << ptr << endl;
    }
}