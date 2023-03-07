#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
int main() {
    char s , h , g ;
    cin >> s >> h >> g ;
    if(s == h && h == g)
        cout << "Won";
    else
        cout << "Lost";
       return 0;
}
