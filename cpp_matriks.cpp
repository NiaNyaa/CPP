#include <iostream>
using namespace std;

int main(){
    int matriks[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            cout << matriks[i][j] << " ";
        }
        cout << endl;
    }

    cout << matriks[0][0];
    
}

/*
    Penjelasan:
    Elemen 1 berada di baris ke-0 dan kolom ke-0, sehingga koordinatnya adalah [0][0].
    Elemen 2 berada di baris ke-0 dan kolom ke-1, sehingga koordinatnya adalah [0][1].
    Elemen 3 berada di baris ke-0 dan kolom ke-2, sehingga koordinatnya adalah [0][2].
    Elemen 4 berada di baris ke-1 dan kolom ke-0, sehingga koordinatnya adalah [1][0].
    Elemen 5 berada di baris ke-1 dan kolom ke-1, sehingga koordinatnya adalah [1][1].
    Elemen 6 berada di baris ke-1 dan kolom ke-2, sehingga koordinatnya adalah [1][2].
    Elemen 7 berada di baris ke-2 dan kolom ke-0, sehingga koordinatnya adalah [2][0].
    Elemen 8 berada di baris ke-2 dan kolom ke-1, sehingga koordinatnya adalah [2][1].
    Elemen 9 berada di baris ke-2 dan kolom ke-2, sehingga koordinatnya adalah [2][2].
*/
