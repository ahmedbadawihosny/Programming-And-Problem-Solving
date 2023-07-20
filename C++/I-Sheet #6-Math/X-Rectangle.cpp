#include <iostream>
#include <cmath>
#define Code_acceleration ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
using namespace std;

int main() {
  Code_acceleration
  ll x1,x2,x3,x4,y1,y2,y3,y4;
  cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
  ll left,right,top,bottom;
  left=min(min(x1,x2),min(x3,x4));
  right=max(max(x1,x2),max(x3,x4));
  bottom=min(min(y1, y2),min(y3,y4));
  top=max(max(y1,y2),max(y3,y4));
  ll n;
  cin>>n;
  for(int i=0;i<n;i++){
      ll x,y;
      cin>>x>>y;
      if (x >= left && x <= right && y >= bottom && y <= top) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
  }

  return 0;
}
