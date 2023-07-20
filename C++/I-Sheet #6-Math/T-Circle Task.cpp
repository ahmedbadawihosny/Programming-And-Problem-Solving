#include <iostream>
#include <algorithm>
#include <math.h>
#define Code_acceleration ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
using namespace std;

int main() {
  Code_acceleration
  double x,y,r,X,Y,Task;
  ll n;
  cin>>x>>y>>r>>n;
  for(int i=0;i<n;i++){
    cin>>X>>Y;
    Task=sqrt((X-x)*(X-x)+(Y-y)*(Y-y));
    if (Task<=r){
      cout<<"YES"<<endl;
    } else {
      cout<<"NO"<<endl;
    }
  }


  return 0;
}
