#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
using namespace std;
int main(){
    int x , y,s ,sum = 1;
    cin >> x >> y ;
    s = x - y;
    sum = pow(32,s);
    cout << sum;
    return 0;
}
