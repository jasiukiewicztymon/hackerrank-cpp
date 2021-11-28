#include <iostream>
#include <string>
using namespace std;

int main() {
	string a, b;
    cin >> a >> b;
  
    cout << a.length() << " " << b.length() << endl;
    cout << a << b << endl;
    
    cout << b[0];
    for (int i = 1; i < a.length(); i++) {
        cout << a[i];
    }
    cout << " " << a[0];
    for (int i = 1; i < b.length(); i++) {
        cout << b[i];
    }
    return 0;
}
