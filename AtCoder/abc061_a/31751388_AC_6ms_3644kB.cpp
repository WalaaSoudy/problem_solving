#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>
using namespace std;
int main() {
    int a , b , c;
    cin >> a >>b >> c;
    if(c >= a && c <= b)
    {
        cout << "Yes";
    }
    else
        cout << "No";
    return 0;
}