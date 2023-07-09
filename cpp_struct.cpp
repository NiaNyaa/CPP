#include <iostream>
using namespace std;

struct Mahasiswa {
    string nama;
    int usia;
    string jurusan;
};

int main() {
    Mahasiswa mhs1;

    mhs1.nama = "Ikhsan";
    mhs1.usia = 20;
    mhs1.jurusan = "Informatika";

    cout << "Nama: " << mhs1.nama << endl;
    cout << "Usia: " << mhs1.usia << " tahun" << endl;
    cout << "Jurusan: " << mhs1.jurusan << endl;

    return 0;
}
