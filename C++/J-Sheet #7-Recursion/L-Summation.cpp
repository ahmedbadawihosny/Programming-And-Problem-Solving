#include <iostream>
#define Code_acceleration ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
using namespace std;

ll rc(ll arr[] ,int n,ll i,ll sum){
  if (i==n) return sum;
  sum += arr[i];
  return rc(arr,n,i+1,sum);
}

int main(){
  Code_acceleration
  int n;
  cin>>n;
  ll arr[n];
  for(ll i=0;i<n;i++){
    cin>>arr[i];
  }
  ll sum= rc(arr,n,0,0);
  cout<<sum;
  return 0;
}