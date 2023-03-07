#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>
using namespace std;
int main() {
    int x, y, sum = 0, sum1 = 0;
    cin >> x >> y;
    for (int i = 0; i < 3; ++i) {
        sum = sum + (x % 10);
        x = x / 10;
        sum1 = sum1 + (y % 10);
        y = y / 10;
    }
    if(sum > sum1)
        cout << sum;
    else
        cout << sum1;
    return 0;
}