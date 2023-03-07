#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
using namespace std;
int main() {
    int t;
    cin>>t;

    while(t--){
    
        int n;
        cin>>n;
        int b=n%11;
        int A=n-b*111;
        if(A>=0 and A%11==0)
            cout<<"YES" << endl;
        else 
            cout<<"NO" << endl;
        
        
    }
    return 0;
}