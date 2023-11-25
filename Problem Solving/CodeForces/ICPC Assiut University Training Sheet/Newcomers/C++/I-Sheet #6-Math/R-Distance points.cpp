#include <iostream>
#include<iomanip>
#include <cmath>
#include <algorithm>
#define Code_acceleration ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
using namespace std;

int main() {
  Code_acceleration
  ll x1,x2,y1,y2,xaxis,yaxis;
  cin>>x1>>y1>>x2>>y2;
  xaxis=(x2-x1)*(x2-x1);
  yaxis=(y2-y1)*(y2-y1);
  cout<<fixed<<setprecision(9)<<sqrt(xaxis+yaxis);

  return 0;
}
