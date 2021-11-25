#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int size, temp;
    vector<int> A;  
    
    cin >> size;
    for (int i = 0; i < size; i++) {
        cin >> temp;
        A.emplace_back(temp);
    } 
    for (int i = A.size() - 1; i >= 0; i--) {
        cout << A[i] << " ";
    }
    return 0;
}
