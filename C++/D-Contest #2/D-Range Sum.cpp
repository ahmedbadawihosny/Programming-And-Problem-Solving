#include <iostream>
using namespace std;

int main() {
  int t;
  cin>>t;
  while (t--){
  long long l,r,mx,mn;
  cin>>l>>r;
  mx = max(l,r);
  mn = min(l,r);
  mn--;
  long long res1 = mn *(mn+1)/2;
  long long res2 = mx*(mx+1)/2;
  cout<<res2 - res1<<endl;
  }
  return 0; 
}