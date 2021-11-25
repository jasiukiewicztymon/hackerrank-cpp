#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int max_of_four(vector<int> a) {
    int max = a[0];
    for (int i = 1; i < a.size(); i++) {
        if (a[i] > max)
            max = a[i];
    }
    return max;
}

int main() {
    int a;
    vector<int> V;
    for (int i = 0; i < 4; i++) {
        cin >> a;
        V.emplace_back(a);
    }
    int ans = max_of_four(V);
    printf("%d", ans);
    
    return 0;
}
