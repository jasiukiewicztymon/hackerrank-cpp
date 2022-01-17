#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int d1, m1, y1, d2, m2, y2, res = 0;
    cin >> d1 >> m1 >> y1 >> d2 >> m2 >> y2;
    
    if (y1 == y2) {
        if (m1 <= m2) {
            if (d1 > d2 && m1 == m2) {
                res = (d1 - d2) * 15;
            }
        }
        else {
            res = (m1 - m2) * 500;
        }
    }
    else if (y1 > y2) {
        res = 10000;
    }
    
    cout << res << endl;
}
