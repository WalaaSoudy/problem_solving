#include "bits/stdc++.h"
#include <algorithm>
#include <vector>
using namespace std;
int arr[200005] , l  , r;

int main(){
        int q ;
        cin >> q;
        char y;
        int x ;
        while(q--) {
            cin >> y >> x;
            if (y == 'L') {
                arr[x] = --l;
            }
            else if (y == 'R') {
                arr[x] = r++;
            }
            else
        cout << min(arr[x] - l, r - arr[x] - 1) << endl;
        }

            return 0;

        }