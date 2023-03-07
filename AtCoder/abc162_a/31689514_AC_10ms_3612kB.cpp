#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
int main() {
    string n;
    cin >> n;
    bool s = true;
    for(int i = 0 ; i < n.size() ; i++)
    {
        if(n[i] == '7') {
            s = true;
            break;
        }
        else
            s = false;
    }
    if(s== true)
        cout << "Yes";
    else
        cout <<"No";
       return 0;
}
