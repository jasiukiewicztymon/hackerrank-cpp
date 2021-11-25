#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    
    for (; a <= b; a++) {
        if(a>9) {
            if(a%2==0) {
                cout << "even\n";
            }
            else {
                cout << "odd\n";
            }
        }
        else if (a == 1) {
            cout << "one\n";
        }
        else if (a == 2) {
            cout << "two\n";
        }
        else if (a == 3) {
            cout << "three\n";
        }
        else if (a == 4) {
            cout << "four\n";
        }
        else if (a == 5) {
            cout << "five\n";
        }
        else if (a == 6) {
            cout << "six\n";
        }
        else if (a == 7) {
            cout << "seven\n";
        }
        else if (a == 8) {
            cout << "eight\n";
        }
        else {
            cout << "nine\n";
        }
    }
    return 0;
}
