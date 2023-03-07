#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
using namespace std;
int main() {
    int n , sum = 0 , c = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        sum = sum + i;
        if(sum < n)
            c++;
        else
            break;
    }
    cout << c ;
    return 0;
}