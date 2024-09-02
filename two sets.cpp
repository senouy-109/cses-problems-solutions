#include <bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long  k,i;
    cin>>k;
    if(k%4==1|| k%4==2){
      cout<<"NO";
    }else if(k%4==3){
      cout<<"YES"<<endl<<(k/2)+1<<endl;
      for(i=1;i<(k/2)+1;i+=2){
        cout<<i<<" "<<k-i<<" ";
      }
      cout<<endl<<(k/2)<<endl;
      for(i=2;i<=k/2;i+=2){
        cout<<i<<" "<<k-i<<" ";
      }
      cout<<k;
    }else{
         cout<<"YES"<<endl<<k/2<<endl;
      for(i=1;i<(k/2)+1;i+=2){
        cout<<i<<" "<<(k-i)+1<<" ";
      }
      cout<<endl<<(k/2)<<endl;
      for(i=2;i<=k/2;i+=2){
        cout<<i<<" "<<(k-i)+1<<" ";
      }
      
        
    }

  return 0;
}