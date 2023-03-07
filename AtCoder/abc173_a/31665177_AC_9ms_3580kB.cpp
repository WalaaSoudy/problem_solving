#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    cin >> n ;
    int x = n % 1000;
    if(x==0)
        cout << 0 ;
    else
        cout << 1000 - x;

       return 0;
}
