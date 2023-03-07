#include <bits/stdc++.h>
using namespace std;

 
int no_of_ze_end(string x){
    int cnt=0;
    for(int i=x.size()-1;i>=0;i--){
        if(x[i]=='0')
            cnt++;
        else
            break;
    }
    return cnt;
}
int no_of_ze_fro(string x){
    int cnt=0;
    for(int i=0;i<x.size();i++){
        if(x[i]=='0')
            cnt++;
        else
            break;
    }
    return cnt;
}
 
string check(string x,int fro,int ed) {
    if (ed >= fro) {
        string add(ed - fro, '0');
        string s1, s2;
        s1 = add + x;
        s2 = s1;
        reverse(s2.begin(), s2.end());
        if(s1==s2) return "Yes\n";
    }
    return "No\n";
}
 
int main(){
    string x; cin>>x;
    int ed=no_of_ze_end(x);
    int fro=no_of_ze_fro(x);
    cout<<check(x,fro,ed);
}