#include <iostream>
using namespace std;

int main() {
    // Integer (whole number without decimals)
    int myNum = 15;
    cout << myNum << endl;
    int x = 5, y=6, z=11;
    cout << x + y + z << endl;
    const int xx = 5, yy =6, zz=11;
    cout << xx + yy + zz << endl;
    // xx = 8; error : assignment of read-only variable

    // Floating point number (with decimals)
    double myFloatNum = 5.99;

    // Character
    char myLetter = 'A';

    // String (text)
    string myText = "Why so serious?";

    // Boolean
    bool myBoolean = true;

    return 0;
}


