#include <iostream>
#define Code_acceleration ios::sync_with_stdio(false); cin.tie(nullptr);
#define ii int
#define bo bool
using namespace std;

bo rc(ii arr[], ii i, ii n) {
    if (i >= n)return true;
    if (arr[i] != arr[n])return false;
    return rc(arr,i+1,n-1);
}

int main(){
  Code_acceleration
  ii n;
  cin>>n;
  ii arr[n];
  for (ii i=0;i<n;i++) {
      cin>>arr[i];
  }
  if (rc(arr,0,n-1)) {
      cout<<"YES";
    } else {
        cout<<"NO";
    }
    return 0;
}