#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    cin >> n ;
    int x = n % 100;
    if(x==1000)
        cout << 100 ;
    else
        cout << 100 - x;

       return 0;
}
