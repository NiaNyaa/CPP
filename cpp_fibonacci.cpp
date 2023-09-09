#include <iostream>
using namespace std;

int main(){
    int next;
    int f1 = 0;
    int f2 = 1;
    
    int n;
    cout << "Masukkan bilangan Fibonacci ke-n:";
    cin >> n;
    for (int i = 1; i <= n; i ++){
        if (i<=1){
            next = 1;
        }
        else {
            next = f1 + f2;
            f1 = f2;
            f2 = next;
            
        }
        cout << next << endl;
    }
}
