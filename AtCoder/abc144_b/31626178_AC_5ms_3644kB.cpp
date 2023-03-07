#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    
        int n ;
        cin >> n;
        bool K=false ;
        for (int i=1;i<10;i++)
        {
            for (int j=1;j<10 ;j++)
            {
                if (i*j == n)
                    K = true ;

            }
        }
        if (K == true )
        {
            cout << "Yes";

        }
        else
            cout << "No" ;


        
       return 0;
}
