#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
using namespace std;
int main() {
    int x, y , sum = 0;
    cin >> x >> y ;
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            sum = sum + j + 100 + 1 + (i*100);
        }
    }
    cout << sum;
    return 0;
}