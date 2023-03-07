#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int x,sum = 0;
    string l;
    cin >> x >> l;
    for(int i = 0 ; i < x ; i++){
        if(l[i] == l[i+1]){
            sum = sum +1;
        }
    }
cout << sum ;
 
    return 0;
}