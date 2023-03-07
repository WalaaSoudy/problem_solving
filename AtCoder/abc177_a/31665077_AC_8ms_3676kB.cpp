#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
int main() {
    float d , t , s ;
    cin >> d >> t >> s ;
    float x = d / s;
    if(t > x || t == x)
        cout << "Yes";
    else
        cout << "No";


       return 0;
}
