#include <iostream>
#define Code_acceleration ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
using namespace std;

int main() {
  Code_acceleration
  ll x1,x2,x3,y1,y2,y3;
  cin>>x1>>y1>>x2>>y2>>x3>>y3;
  if (((y2-y1) * (x3-x2)) == ((y3-y2) * (x2-x1)) ){
      cout<<"YES";
  } else {
      cout<<"NO";
  }
  return 0;
}