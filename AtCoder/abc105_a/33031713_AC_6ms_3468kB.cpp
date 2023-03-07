#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
using namespace std;
int main() {
    int a , b ;
    cin >> a >> b;
    if(a % b == 0)
    {
        cout << 0 ;
        return 0;
    }
    else
        cout << 1 ;
    return 0;
}