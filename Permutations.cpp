#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long n,i;
    cin>>n;
    if(n==1){
    	cout<<1;
	}else if(n<4){
    	cout<<"NO SOLUTION";
    }else if(n%2==1){
    i=2;
    while(i<=n){
    	cout<<i<<" ";
      if(i==n-1){
      	i=1;
      }else{
      i+=2;}
    }
    }else{
    	i=2;
    while(i<=(n)){
    	cout<<i<<" ";
      if(i==n){
      	i=1;
      }else{
      i+=2;}
    }
    }
	return 0;
}