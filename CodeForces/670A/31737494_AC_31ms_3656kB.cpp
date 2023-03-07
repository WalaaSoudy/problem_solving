#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>
using namespace std;
int main() {

        int n;
        cin >> n;
        if (n==1) {
            cout << "0 1";
            return 0;
        }
        cout << (n/7)*2+(n%7)/6 << " " << ((n-2)/7)*2 + ((n-2)%7)/6+2;


    return 0;
}