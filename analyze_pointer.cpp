#include <iostream>

using namespace std;

void analyze_pointer(int *ptr) {
    cout << "Memory location: " << ptr << '\n';
    cout << "Integer value: " << *ptr << '\n';
}

int main() {
    // Allocate an integer on the stack and pass its address.
    int i_value = 42;
    cout << "Stack integer:\n";
    analyze_pointer(&i_value);

    // Part 2, Allocate an integer in heap and assign a value through the pointer.
    int *heap_value = new int;
    *heap_value = 100;
    cout << "\nHeap integer:\n";
    analyze_pointer(heap_value);

    delete heap_value;
    return 0;
}
