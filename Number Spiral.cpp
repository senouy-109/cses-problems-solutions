#include <bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
   long t,i,x,y,max,valmo,fval;
   cin>>t;
   for(i=0;i<t;i++){
    cin>>x>>y;
    max= x>y ? x:y;
    valmo=(max*max)-(max-1);
    if(max%2==0){
      if(x<y){
        fval=valmo-(y-x);
      }else{
        fval=valmo+(x-y);
      }
    } else{
      if(x<y){
        fval=valmo+(y-x);
      }else{
        fval=valmo-(x-y);
      }
    }
    cout<<fval<<endl;
   }
  return 0;
}