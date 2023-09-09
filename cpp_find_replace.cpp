#include <iostream>
using namespace std;

int main(){
    string hrf = "Hallo";
    int found = hrf.find('a');
    hrf.replace(1,1,"e"); // (posisi, panjang, pengganti)
    cout << hrf;
    
}
