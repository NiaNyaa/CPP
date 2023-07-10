#include <iostream>
using namespace std;

struct Identitas {
    string nama[10];
};

int main() {
    Identitas id1;
    int total = 0;
    
    cout << "Masukkan nama: ";
    cin >> id1.nama[total];
    total++;
    
    cout << id1.nama[0];
    return 0;
}
