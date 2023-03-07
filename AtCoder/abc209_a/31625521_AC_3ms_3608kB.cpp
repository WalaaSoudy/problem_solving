#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {

    int x , y;
    cin >> x >> y;
    if(x > y)
    {
        cout << 0;
    }
    else if(y > x )
        cout << y - x + 1;
       return 0;
}
