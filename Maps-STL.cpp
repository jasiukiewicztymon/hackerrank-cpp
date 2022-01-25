#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    int t, type, val; cin >> t;
    string name;
    map<string, int>m;
    map<string, int>::iterator itr;
    for (int i = 0; i < t; i++) {
        cin >> type;
        switch (type) {
            case 1:
                cin >> name >> val;
                if (m.find(name) == m.end())
                    m.insert(make_pair(name, val));
                else {
                    itr = m.find(name);
                    itr->second += val;
                }
                break;
            case 2:
                cin >> name;
                m.erase(name);
                break;
            case 3:
                cin >> name; 
                itr = m.find(name);
                if (itr != m.end())
                    cout << itr->second << endl;
                else 
                    cout << 0 << endl;
                break;
        }
    }
    return 0;
}
