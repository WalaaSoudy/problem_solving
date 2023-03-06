#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    cin.tie(0), cout.tie(0), cin.sync_with_stdio(0);
    cout.sync_with_stdio(0);
  long long t;
  int y;
 cin >> t;
  queue<int> q;
  while(t--){
      int x;
     cin>> x;
      if(x == 1){
         cin >> y;
          q.push(y);
      }
      else if(x == 2){
          if(!q.empty())
            q.pop();
      }

      else{
          if(q.empty())
            {cout <<"Empty!\n";}
          else
            {cout  << q.front() << "\n";}

      }
  }
  return 0;
}
