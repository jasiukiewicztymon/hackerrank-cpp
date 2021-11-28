#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int s, t;
    vector<int> V;
   
    cin >> s;
    for (int i = 0; i < s; i++) {
        cin >> t;
        V.emplace_back(t);
    } 
    
    sort(V.begin(), V.end());
    
    for (int i = 0; i < s; i++) {
        cout << V[i] << " ";
    }
    return 0;
}
