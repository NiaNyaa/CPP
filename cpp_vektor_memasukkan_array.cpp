#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> MyVector;
    
    for (int i = 0;i<3;i++){
        int angka;
        cout << "Masukkan angka: ";
        cin >> angka;
        MyVector.push_back(angka);
    }
    for (int angka : MyVector){
        cout << angka;
    }
    }
