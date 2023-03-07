#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
using namespace std;
int main(){
    int a , b , c , ans = -1;
    cin >> a >> b >> c;
    for (int i = a; i <= b; ++i) {
        if (i % c == 0) {
             ans = i;
            break;
            }
        }
    cout << ans;

    return 0;
}

