#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a , b , c , n = 1;
    cin >> a >> b;
    c = abs(a-b);
    for (int i = 0; i < c; ++i) {
        n = n *32;
    }
    cout << n ;
    return 0;
}