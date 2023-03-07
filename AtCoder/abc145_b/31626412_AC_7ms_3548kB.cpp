#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {

    int N ;
    cin >> N ;
    char S [N] ;
    cin >> S;
    bool  K = false;
    for (int i=0 , j=N/2 ; i<N/2 ; i++,j++)
    {
        if (S[i]==S[j])
        {
            K = true ;
        }
        else
        {
            K = false ;
            break ;
        }

    }
    if (N %2 ==1)
    {
        K = false ;
    }
    if (K == true )
        cout << "Yes" ;
    else
        cout << "No" ;
       return 0;
}
