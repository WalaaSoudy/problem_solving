#include "bits/stdc++.h"
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int x , mini , maxamium; cin >> x ;
    int arr[x];
    for(int i = 0; i < x ; i++)
    {
        cin >> arr[i];
    }
    cout << arr[1]-arr[0] << " " << arr[x-1] - arr[0] << endl;
    for (int i = 1; i < x-1; ++i) {
        mini = min((arr[i] - arr[i-1]),(arr[i+1]-arr[i]));
        maxamium = max((arr[i]-arr[0]),arr[x-1]-arr[i]);
        cout << mini << " " << maxamium << endl;
    }
    cout << arr[x-1] - arr[x-2] << " " << arr[x-1]-arr[0] << endl;
    return 0;
}