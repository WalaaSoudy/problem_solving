#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
using namespace std;
int main() {
    int n , k ,sum = 0;
    cin >> n >> k ;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    for (int i = 0; i < k; ++i) {
        sum = sum + arr[i];
    }
    cout << sum ;
    return 0;
}