#include <iostream>
using namespace std;

int main(){
    string prefix = "pine";
    string suffix = "apple";
    cout << prefix + suffix << endl;
    prefix.append(suffix);
    cout << prefix << endl;
    cout << "length is : " +to_string(prefix.length()) << endl;
    cout << "length is : " +to_string(prefix.size()) << endl;
    return 0;
}
