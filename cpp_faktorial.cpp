#include <iostream>
using namespace std;

int main(){
    int ipt;
    int semua = 1;
    cout << "Masukkan Angka ke-N:";
    cin >> ipt;
    
    for (int i = 1; i<= ipt; i++){
        semua *= i;
        
    }
    cout << semua;
    

}
