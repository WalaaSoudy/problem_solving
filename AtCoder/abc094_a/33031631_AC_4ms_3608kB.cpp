#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
using namespace std;
int main() {
    int a , b , c ;
    cin >> a >> b >> c ;
    if(c < a || c > a+b )
        cout << "NO";
    else
        cout << "YES";
    return 0;
}