#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
   int a, num;
   cin >> a;
   vector<int> V;
   for (int i=0; i<a; i++){
       cin >> num;
       V.emplace_back(num);
   }
   int b, val;
   cin >> b;
   for (int i=0; i<b; i++){
       cin >> val;
       vector<int>::iterator it = lower_bound(V.begin(), V.end(), val);
       if (V[it - V.begin()] == val)
           cout << "Yes " << (it - V.begin()+1) << endl;
       else
           cout << "No " << (it - V.begin()+1) << endl;
   }
   return 0;
}
