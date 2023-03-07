#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>
using namespace std;
int main() {
    int x, y,z;
    cin >> x ;
    if(x %2 == 0)
    {
       y = x / 2;
       cout << y * y ;
    }
    else
    {
        z = x / 2;
        cout << (z +1) * z;
    }
    return 0;
}