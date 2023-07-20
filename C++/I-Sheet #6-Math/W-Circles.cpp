#include <iostream>
#include <cmath>
#define Code_acceleration ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
using namespace std;

int main() {
  Code_acceleration
  double x1,y1,x2,y2,x3,y3,x4,y4;
  cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
  double midpoint_x1,midpoint_x2,midpoint_y1,midpoint_y2,r1,r2,circle;
  
  midpoint_x1=(x1+x2)/2;
  midpoint_y1=(y1+y2)/2;
  midpoint_x2=(x3+x4)/2;
  midpoint_y2=(y3+y4)/2;

  r1 = sqrt(pow(x1-x2,2) + pow(y1-y2,2))/2;
  r2 = sqrt(pow(x3-x4,2) + pow(y3-y4,2))/2;
  circle = sqrt(pow(midpoint_x1 - midpoint_x2 ,2) + pow(midpoint_y1 - midpoint_y2 , 2));
  
  if (circle > (r1+r2)){
    cout<<"NO";
  } else {
    cout<<"YES";
  }
  return 0;
}