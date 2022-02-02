#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    size_t capacity = 5;
    size_t used = 0;

    int* ptr;
    ptr = new int[capacity];

    int* tmpptr;

    for (size_t i = 0; i < 25; ++i) {
        ptr[used] = rand();
        cout << ptr[used] << endl;
        used++;

        if (used == capacity) {
            cout << "Sorry, no room left.\n";
            break;
        }
    }
}