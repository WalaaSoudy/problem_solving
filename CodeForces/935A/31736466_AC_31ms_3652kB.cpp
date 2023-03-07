#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>
using namespace std;
int main() {
    int x ;
    cin >> x ;
    int sum = 0;
    for (int i = 1; i < x; ++i) {
        if(x % i == 0)
        {
            sum++;
        }
    }
    cout << sum ;
    return 0;
}