#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
using namespace std;
int main() {
    string x ;
    cin >> x ;
    for (int i = 0; i < x.size() ; ++i) {
        if(x[i] != '.')
            cout << x[i];
        else
            break;
    }
    return 0;
}