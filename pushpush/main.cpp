#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(0), cout.tie(0), cin.sync_with_stdio(0);
    cout.sync_with_stdio(0);
    int n; cin >> n;
    deque<int> de;
    int arr[n];
    for (int i = 0 ; i < n; i++){
        cin >> arr[i];
        if (i%2!=0)
            de.push_front(arr[i]);
        else
            de.push_back(arr[i]);
    }
    if (n%2!=0)
        reverse(de.begin(), de.end());

    for(int i = 0 ; i < n ; i++){
        cout << de.front() << " ";
        de.pop_front();
    }
    cout << endl;
  return 0;
}
