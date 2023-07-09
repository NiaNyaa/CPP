#include <iostream>
using namespace std;

// Deklarasi struct
struct Mahasiswa {
    string nama;
    int usia;
    string jurusan;
};

int main() {
    // Deklarasi variabel struct
    Mahasiswa mhs1;

    // Input nilai dari pengguna
    cout << "Masukkan nama: ";
    getline(cin, mhs1.nama);

    cout << "Masukkan usia: ";
    cin >> mhs1.usia;

    cout << "Masukkan jurusan: ";
    cin.ignore();
    getline(cin, mhs1.jurusan);

    // Menampilkan nilai anggota struct
    cout << "Nama: " << mhs1.nama << endl;
    cout << "Usia: " << mhs1.usia << " tahun" << endl;
    cout << "Jurusan: " << mhs1.jurusan << endl;

    return 0;
}
