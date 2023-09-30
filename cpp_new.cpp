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
    delete[] myArray; // menggunakan new bisa menggunakan fungsi delete[]

    return 0;
}

/*
Analogi:
dengan new:
int* ptr = new int; // Membuat ember pointer dan memesan ember kosong untuk integer.
*ptr = 42; // Memasukkan angka 42 ke dalam ember kosong tersebut melalui pointer.\

tanpa new:
int angka = 42; // Membuat ember berisi 42 secara langsung.
int* ptr = &angka; // Membuat ember pointer dan menetapkannya untuk menunjuk ke ember berisi 42.
*/
