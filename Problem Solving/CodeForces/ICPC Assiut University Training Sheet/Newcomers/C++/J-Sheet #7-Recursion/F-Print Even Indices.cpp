#include <iostream>
#define Code_acceleration ios::sync_with_stdio(false); cin.tie(nullptr);
#define ii int
using namespace std;

void rc(ii arr[] ,ii n,ii i){
  if (i>= n)return;
  rc(arr,n,i+2);
  cout<<arr[i]<<" ";
}

int main(){
  Code_acceleration
  ii n;
  cin>>n;
  ii arr[n];
  for(ii i=0;i<n;i++){
    cin>>arr[i];
  }
  rc(arr,n,0);
  return 0;
}