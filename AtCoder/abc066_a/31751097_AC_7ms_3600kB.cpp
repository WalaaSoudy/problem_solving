#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>
using namespace std;
int main() {
    int x , y ,z;
    cin >> x >> y >> z;
    if(x+y <  y + z && x+y <x+z)
    {
        cout << x + y ;
    }
    else if(z+y <  y + x && z+y < x+z)
    {
        cout << z+y;
    }
    else if(z+x <  y + x &&z+x< y+z)
    {
        cout << z + x;
    }
    else if(z+y == z +x && z+y == x + y)
    {
        cout << x + y;
    }
    return 0;
}