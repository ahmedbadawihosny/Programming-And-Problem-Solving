#include <iostream>
#include <algorithm>
#include <cmath>
#define Code_acceleration ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
using namespace std;

int main() {
  Code_acceleration
  ll a,b,q;
  cin>>a>>b>>q;
  ll res =q%3;
  if (res==1){
      cout<<a<<endl;
  } else if (res==2){
      cout<<b<<endl;
  } else{
      cout<<(a^b)<<endl;
  }
  return 0;
}