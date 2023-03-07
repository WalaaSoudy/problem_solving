#include "bits/stdc++.h"
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n , a , b , c;
    cin >> n >> a >> b >> c;
    int ans =0;
    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= n; ++j) {
            int up = n - a * i - b * j;
            if (up < 0 or (up % c)) {
                continue;
            }
            int k = (n - a * i - b * j)/ c;
            ans = max(ans,i+j+k);
        }
    }
    cout << ans ;
    return 0;
}