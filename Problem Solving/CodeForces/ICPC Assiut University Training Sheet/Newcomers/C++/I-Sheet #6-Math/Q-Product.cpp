#include <iostream>
#define Code_acceleration ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
using namespace std;

int main() {
  Code_acceleration
  ll l,r,m,ans=1;
  cin>>l>>r>>m;
  for (int i=l;i<=r;i++) {
      ans*=i;
      ans%=m;
  }

  cout << ans << endl;
  return 0;
}