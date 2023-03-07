#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
using namespace std;
int main() {
    int a , b ,c , x , y ;
    cin >> a >> b >> c ;
    x = a - b ;
    y = x / c ;
    cout << x - (y * c);

    return 0;
}