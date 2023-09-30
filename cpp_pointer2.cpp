#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int* ptr = &x; // Pointer ke variabel x
    cout << "Nilai x: " << *ptr << endl; // Mengakses nilai x melalui pointer

    int arr[5] = {1, 2, 3, 4, 5};
    int* arrPtr = arr; // Pointer ke elemen pertama dalam array
    cout << "Elemen ketiga dalam array: " << *(arrPtr + 2) << endl;

    return 0;
}
