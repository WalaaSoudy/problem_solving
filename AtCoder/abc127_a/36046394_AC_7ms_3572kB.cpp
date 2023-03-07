#include<bits/stdc++.h>
#include "iostream"
using namespace std;

int main() {
    int x ,y;
    cin >> x >> y;
    if(x <= 5)
    {
        cout << 0;
    }
    else if(x < 13 && x > 5)
    {
        cout << y / 2;
    }
    else
        cout << y ;
    return 0;
}

