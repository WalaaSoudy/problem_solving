#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
int main() {
    int n, x ,y , sum = 0 ;
    cin >> n >> x ;
    for (int i = 0; i < n; i++) {
        cin >> y;
        if(i % 2)
            y = y - 1;
        sum = sum + y;
    }
    if(sum <= x)
    {
        cout << "Yes";
    }
    else
        cout << "No";
    return 0;
}