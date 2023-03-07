#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
using namespace std;
int main() {
    int x , y , a , b ;
    cin >> x >> y ;
    bool h;
    int z = 7 - y;
    while (x--) {
        cin >> a >> b;
        if (a == y || a == z || b == y || b == z) {
            cout << "NO";
            return 0;
        }
    }
        cout << "YES";
    
     return 0;
}