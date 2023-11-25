#include <iostream>
#define Code_acceleration ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
using namespace std;

ll  rc(ll arr[], int n, int m) {
    if (m == 0)return 0;
    return arr[n-m] + rc(arr,n,m-1);
}

int main(){
  Code_acceleration
  int n,m;
  cin>>n>>m;
  ll arr[n];
  for(int i=0;i<n;i++){
      cin>>arr[i];
  }
    cout<<rc(arr, n, m);
    return 0;
}