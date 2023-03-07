#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

int main() {
            int n;
            cin >> n;
            string d;
            while (n--) {
            cin >> d;
           if (d.length() < 11) {
              cout << d << endl;
          }
          else
               cout << d[0] << d.length() - 2 << d[d.length() - 1] << endl;
    }
        return 0;
    }




