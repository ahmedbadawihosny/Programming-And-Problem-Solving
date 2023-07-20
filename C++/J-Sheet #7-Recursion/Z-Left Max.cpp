#include <iostream>
#define Code_acceleration ios::sync_with_stdio(false); cin.tie(nullptr);
#define ii int
using namespace std;

void rc( ii arr[] ,ii n, ii i,ii maxarr ){
    if (i>n){
        return;
    } else {
    maxarr = max(maxarr,arr[i]);
    }
    cout<<maxarr<<" ";
    rc(arr,n,i+1,maxarr );
}

int main(){
  Code_acceleration
  ii n,maxarr=INT_MIN;
  cin>>n;
  ii arr[n+1];
  for(ii i=1 ;i<=n;i++){
      cin>>arr[i];
  }
  rc(arr,n,1,maxarr) ;
  return 0;
}