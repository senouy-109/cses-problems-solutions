#include <bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   unsigned long  long  k,i,r=0;
    cin>>k;
    i=5;
    while(i<=k){
      r+=k/i;
      i*=5;
    }
    cout<<r;
  return 0;
}