#include <iostream>
#include <math.h>
#define Code_acceleration ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
using namespace std;

int main() {
  Code_acceleration
  int r,s,circle;
  cin>>r>>s;
  circle=r*2;
  if (circle <= s){
      cout<<"Square";
  } else if (s*sqrt(2) <= circle){
      cout<<"Circle";
  } else{
      cout<<"Complex";
  }
  return 0;
}
