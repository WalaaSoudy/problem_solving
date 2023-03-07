#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
using namespace std;
bool arr[100005];
int main() {
    int n, x;
    cin >> n;
    while (n!= 0){
        cin >> x;
        arr[x] = true;
        while (arr[n] == true){
            if(n ==0)break;
            cout << n  << " ";
            n--;
        }
        cout <<endl;
    }
    return 0;
}