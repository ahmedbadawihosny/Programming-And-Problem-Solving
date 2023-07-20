#include <iostream>
#include <algorithm>
#include <math.h>
#define Code_acceleration ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
using namespace std;

long long Divis(long long n){
      return n*(n+1)/2;
}

int main() {
  Code_acceleration
  long long a,b,x,mx,mn;
  cin>>a>>b>>x;
  mx=max(a,b) , mn=min(a,b);
  cout<<(Divis(mx/x)*x)-(Divis((mn-1)/x)*x);
  return 0;
}
