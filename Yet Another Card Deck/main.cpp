#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(0), cout.tie(0), cin.sync_with_stdio(0);
    cout.sync_with_stdio(0);
    int t ,x,y,z;
    cin >> t >> x;
    int arr[t];
    for (int i = 0; i < t; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i < x; i++){
        cin >> y;
        for (int j = 0; j < t; j++) {
            if(y==arr[j]) {
                cout << j+1 << " ";
                z = j;
                break;
            }
        }
        for (int k = z; k > 0; k--) {
            arr[k] = arr[k - 1];
        }
            arr[0] = y;

    }

  return 0;
}
