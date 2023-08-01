#include <iostream>
using namespace std;

// to_string = jadi string
// stoi = string to integer
int main(){
    int angka = 12345;
    string berubah_string = to_string(angka);
    int total = berubah_string.size();
    cout << total << endl;
    
    string huruf = "90";
    int berubah_integer = stoi(huruf);
    cout << berubah_integer;
}
