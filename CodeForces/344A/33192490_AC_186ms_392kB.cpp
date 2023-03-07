#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
using namespace std;
int main() {
    int x , s = 0; cin >> x;
    int arr[x];
    for (int i = 0; i <x ; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i < x ; ++i) {

        if(arr[i] != arr[i+1])
            s++;
    }
    cout << s;
    return 0;
}