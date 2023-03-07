#include<bits/stdc++.h>
using namespace std;
#include <iostream>
#include <string>
int main(){
    int a , b , c;
    cin >> a >> b;
    c = a+1;
    if((a == 1 && b == 10 )||(a == 10 && b== 1))
    {
        cout << "Yes";
    }
    else if (b == c)
    {
        cout << "Yes";
    }
    else
        cout << "No";
    return 0;
}