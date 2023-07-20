#include <iostream>
#define Code_acceleration ios::sync_with_stdio(false); cin.tie(nullptr);
#define ii int
using namespace std;

ii rc(ii arr[] ,ii n,ii i,ii max){
  if (i==n) return max;
  if (arr[i]>= max) max = arr[i];
  return rc(arr,n,i+1,max);
}

int main(){
  Code_acceleration
  ii n;
  cin>>n;
  ii arr[n];
  for(ii i=0;i<n;i++){
    cin>>arr[i];
  }
  ii max = rc(arr,n,0,arr[0]);
  cout<<max;
  return 0;
}