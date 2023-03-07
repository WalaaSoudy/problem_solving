#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
int main() {
    int n ;
    string s;
    cin >> n >> s;
    for (int i = 0; i < s.size(); i++) {
        s[i] += n;
        if(s[i] > 'Z') {
            s[i] -= 26;
        }
    }
    cout << s << endl;
       return 0;
}
