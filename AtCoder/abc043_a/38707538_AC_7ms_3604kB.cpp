#include "bits/stdc++.h"
#include <algorithm>
#include <vector>
using namespace std;

int fact(int i){
    if (i <= 1) return 1;
    else return i+fact(i-1);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    cout << fact(N) << "\n";
    return 0;
}