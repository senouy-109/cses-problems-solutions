#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,i;
    long arr[200000],count=0;
    cin>>n;
    arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            count+=(arr[i-1]-arr[i]);
            arr[i]+=(arr[i-1]-arr[i]);
        }
    }
    cout<<count;
  return 0;
}
 