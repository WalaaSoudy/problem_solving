#include "bits/stdc++.h"
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int x , y , z ;
    cin >> x >> y >> z;
    swap(x,y);
    swap(x,z);
    cout << x << " " << y << " " << z ;
    return 0;
}