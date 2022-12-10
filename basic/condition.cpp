#include <iostream>
using namespace std;

int main(){
    int x, y;
    cout << "x :";
    cin >> x;
    cout << "y :";
    cin >> y;

    if ( x > y ){
        cout << " X is greater than Y haha" << endl;
    } else if ( x == y ) {
        cout << " X and Y is same" << endl;
    } else {
        cout << " Nope, Y is greater than X haha"<< endl;
    }
    return 0;
}
