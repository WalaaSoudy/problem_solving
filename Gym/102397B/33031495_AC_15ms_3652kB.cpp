#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
using namespace std;
int main() {
    int n ;
    cin >> n ;
    if(n%2 == 0)
    {
        cout << 2 << " " << n / 2;
    }
    else
        cout << 1 << " " << n ;
    return 0;
}