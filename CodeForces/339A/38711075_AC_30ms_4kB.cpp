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
    sort(x.begin(),x.end());
    for (int i = 0; i < x.size(); ++i) {
        if(x[i]=='+') {
            continue;
        }
        else
            cout <<x[i];
        if(i != x.size()-1)
        {
            cout << '+';
        }
    }
     return 0;
}