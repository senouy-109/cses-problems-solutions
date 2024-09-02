#include <bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   unsigned long  long  k,i;
    cin>>k;
    i=1;
    while(k){

      i*=2;
      k--;
     
       
        i%=1000000007;
      
    }
     
    cout<<i;
  return 0;
}