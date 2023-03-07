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
    if(x[0]==x[1] && x[2] == x[3] && x[1] != x[2])
    {
        cout << "Yes";
    }
    else
        cout << "No";
    return 0;
}