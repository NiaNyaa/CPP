#include <iostream>
using namespace std;


int main() {
   int num = 5;
    int* ptr = &num;

    cout << "Nilai tanpa *: " << ptr<< endl;
    cout << "Nilai pakai *: " << *ptr<< endl;
    return 0;
}
