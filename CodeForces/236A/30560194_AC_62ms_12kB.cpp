#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string a;
    cin >> a;
    bool arr [26] = {false};
    for(int i = 0 ; i < a.length() ; i++) {
        arr[a[i]-'a'] = true;
    }
    int sum = 0;
    for(int i = 0 ; i < 26 ; i++) {
        if(arr[i] == true) sum++;
    }
        if (sum % 2 == 0) {
            cout << "CHAT WITH HER!";
        } else
            cout << "IGNORE HIM!";
    return 0;
}