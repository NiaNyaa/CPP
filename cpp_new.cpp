#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Masukkan ukuran array: ";
    cin >> size;

    int* myArray = new int[size]; // Alokasi memori dinamis untuk array

    // Mengisi array dengan data
    for (int i = 0; i < size; i++) {
        cout << "Masukkan elemen " << i + 1 << ": ";
        cin >> myArray[i];
    }

    // Mencetak isi array
    cout << "Isi array: ";
    for (int i = 0; i < size; i++) {
        cout << myArray[i] << " ";
    }

    // Menghapus memori yang dialokasikan
    delete[] myArray;

    return 0;
}
