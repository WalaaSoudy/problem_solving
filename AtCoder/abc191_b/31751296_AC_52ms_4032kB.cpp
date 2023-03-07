#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>
using namespace std;
int main() {
    int n , x;
    cin >> n >> x ;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; ++i) {
        if(x == arr[i])
        {
            continue;
        }
        cout << arr[i] << " ";

    }
    return 0;
}