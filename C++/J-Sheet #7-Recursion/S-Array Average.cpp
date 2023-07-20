#include <iostream>
#include <iomanip>
#define Code_acceleration ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define ii int
#define dou double
using namespace std;

dou rc(ll arr[] ,ii n,ii i,dou sum){
  if (n==i) return sum/n;
  sum+=arr[i];
  return rc(arr,n,i+1,sum);
}

int main(){
  Code_acceleration
  ii n;
  dou sum;
  cin>>n;
  ll arr[n];
  for (ii i=0;i<n;i++){
      cin>>arr[i];
  }
  cout<<fixed<<setprecision(6)<<rc(arr,n,0,0);
  return 0;
}