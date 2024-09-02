#include <bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long k,i;
    cin>>k;
    for(long long i=1;i<=k;i++){
      cout<<((((i*i)*((i*i)-1)))/2)-4*((i-2)*(i-1))<<endl;
    }
  return 0;
}