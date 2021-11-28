#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int size, del, start, end, temp;
    vector<int> V;
       
    cin >> size;
    for (int i = 0; i < size; i++) {
        cin >> temp;
        V.emplace_back(temp);
    }    
    cin >> del >> start >> end;
    
    V.erase(V.begin() + del - 1);
    V.erase(V.begin() + start - 1, V.begin() + end - 1);
    
    cout << V.size() << endl;
    for (int i = 0; i < V.size(); i++) {
        cout << V[i] << " ";
    }
    return 0;
}
