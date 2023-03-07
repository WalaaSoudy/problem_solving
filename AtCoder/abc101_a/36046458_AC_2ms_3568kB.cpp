#include<bits/stdc++.h>
#include "iostream"
using namespace std;

int main() {
    string s ;
    int x = 0;
    cin >> s ;
    for (int i = 0; i < s.length(); ++i) {
        if(s[i] == '+')
        {
            x++;
        }
        else
            x--;
    }
    cout << x;
    return 0;
}

