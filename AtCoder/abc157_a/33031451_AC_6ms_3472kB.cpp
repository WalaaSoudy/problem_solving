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
    if(n %2 == 0)
    {
        cout << n /2;
    }
    else
        cout << (n/2) +1 ;
    return 0;
}