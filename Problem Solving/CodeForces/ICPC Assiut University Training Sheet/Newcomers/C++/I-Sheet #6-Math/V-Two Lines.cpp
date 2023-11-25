#include <iostream>
#define Code_acceleration ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
using namespace std;

int main() {
  Code_acceleration
  int x1,x2,x3,x4,y1,y2,y3,y4,l1,l2,l3,l4;
  cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
  l1=x2-x1;
  l2=y2-y1;
  l3=x4-x3;
  l4=y4-y3;
  if (l1*l4==l2*l3){
      cout<<"YES";
  } else {
      cout<<"NO";
  }
  return 0;
}