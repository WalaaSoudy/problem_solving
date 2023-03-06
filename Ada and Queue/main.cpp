#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(0), cout.tie(0), cin.sync_with_stdio(0);
    cout.sync_with_stdio(0);
    long long t;
    bool isreverse = 0;
    int y;
    cin >> t;
    deque<int> q;
    while (t--) {
        string x;
        cin >> x;
        if (x == "toFront") {
            cin >> y;
            if (isreverse) {
                q.push_back(y);
            }
         else {
            q.push_front(y);
        }}
      else if(x == "push_back"){
          cin >> y;
            if(isreverse) {
                q.push_front(y);
            }
         else{
             q.push_back(y);}
      }
      else if(x == "front") {
            if (q.empty()) {
                cout << "No job for Ada?\n";
            } else {
                if (isreverse) {
                    cout << q.back() << "\n";
                    q.pop_back();
                } else {
                    cout << q.front() << "\n";
                    q.pop_front();
                }
            }
        }
      else if(x == "back")
      {
          if(q.empty()) {
              cout << "No job for Ada?\n";
          }
          else{
              if (isreverse) {
                  cout << q.front() << "\n";
                  q.pop_front();
              } else{
               cout << q.back() << "\n";
               q.pop_back();}
          }
      }
      else{
         if(isreverse)
         {
             isreverse = 0;
         } else{
             isreverse = 1;
         }
      }
  }
  return 0;
}
