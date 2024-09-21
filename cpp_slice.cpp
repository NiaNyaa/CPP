#include <string>
#include <iostream>

using namespace std;

string slice(const string& str, int start, int end) {
    return str.substr(start, end - start);
}


int main() {
    string str = "Hello, World!";
    string slicedStr = slice(str, 0, 2); // start at index 7, end at index 12


    cout << slicedStr << endl;

    return 0;
}


