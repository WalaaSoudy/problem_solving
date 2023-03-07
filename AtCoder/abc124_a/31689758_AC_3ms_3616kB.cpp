#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>
using namespace std;
int main() {
    int x , y;
    cin >> x >> y;
    if(x >= 3 && x <= 20 && y >= 3 && y <=20) {
        if (x > y)
            cout << x + (x - 1);
        else if(x < y)
            cout << y + (y-1);
        else
            cout << x + y;
    }
    return 0;
}
