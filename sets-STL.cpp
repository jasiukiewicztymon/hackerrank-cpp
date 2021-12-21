#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    int num, query, value;
    set<int>S;
    cin >> num;
    
    for (int i = 0; i < num; i++) {
        cin >> query >> value;
        switch (query) {
            case 1:
                S.insert(value);
                break;
            case 2:
                S.erase(value);
                break;
            case 3:  
                if (S.find(value) == S.end())
                    cout << "No\n";
                else 
                    cout << "Yes\n";
                break;
        }
    }
       
    return 0;
}
