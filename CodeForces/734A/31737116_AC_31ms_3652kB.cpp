#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>
using namespace std;
int main() {
    int x,S=0,V=0;
    cin >> x ;
    char c ;
    while (x--)
    {
        cin >> c ;
        if(c == 'A')
            S++;
        else
            V++;
    }
    if(S>V)
        cout << "Anton";
    else if(V>S)
        cout << "Danik";
    else
        cout << "Friendship";
    return 0;
}