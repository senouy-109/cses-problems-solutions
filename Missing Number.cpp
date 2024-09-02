#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long n,k,sum=0;
    cin>>n;
    for(long i=0;i<n-1;i++){
    	cin>>k;
    	sum+=k;
    }
   
    cout<<((n*(n+1))/2)-sum;
	return 0;
}