#include <iostream>
using namespace std;

int main() {
    int x = 42;
    int* ptr = &x;

    cout << "Pointer value: " << *ptr << endl;  // Dereferencing
    return 0;
}
