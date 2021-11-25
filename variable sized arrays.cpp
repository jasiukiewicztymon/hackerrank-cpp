#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    //definitions
    int n, q, s, t;
    int x, y;
    cin >> n >> q;
    vector<vector<int>> A(n);
    vector<int> T, I;
    
    //input
    for (int i = 0; i < n; i++) {
        cin >> s;
        for (int j = 0; j < s; j++) {
            cin >> t;
            T.emplace_back(t);
        } 
        A[i] = T;
        T.clear();
    }
    
    //output with query
    for (int i = 0; i < q; i++) {
        cin >> x >> y;
        cout << A[x][y] << endl;
    }
    return 0;
}
