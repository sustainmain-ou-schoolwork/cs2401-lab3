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
        //cout << ptr[used] << endl;
        used++;

        // resize array if necessary
        if (used == capacity) {
            capacity += 5;

            // copy old array
            tmpptr = new int[capacity];
            for (size_t i = 0; i < used; i++) {
                tmpptr[i] = ptr[i]; 
            }
            ptr = tmpptr;
            delete []tmpptr;

            cout << "Resized" << endl;
        }
    }

    tmpptr[2] = 0;
    
    // print numbers
    for (size_t i = 0; i < used; ++i) {
        cout << ptr[i] << endl;
    }
}