#include <iostream>
#include <stdexcept>

using namespace std;

int main() {
    try {
        int x = 10;
        int y = 0;
        if (y == 0) {
            throw runtime_error("Pembagian oleh nol tidak diizinkan");
        }
        int hasil = x / y;
        cout << hasil;
    }
    catch (runtime_error& e) {
        cerr << "Terjadi kesalahan: " << e.what() << endl;
    }
    
    return 0;
}
