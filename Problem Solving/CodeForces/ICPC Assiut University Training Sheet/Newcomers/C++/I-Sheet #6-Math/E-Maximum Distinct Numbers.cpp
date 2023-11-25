#include <iostream>
#include <algorithm>
#include <cmath>
#define Code_acceleration ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
using namespace std;

int main() {
  Code_acceleration
  ll n;
  cin>>n;
  for (ll i=1;;i++){
  if (i>n){
  cout<<i-1;
  return 0;
  } else {
      n-=i;
  }
  }

}