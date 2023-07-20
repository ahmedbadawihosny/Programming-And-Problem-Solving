#include <iostream>
#include <string>
#define Code_acceleration ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
using namespace std;

int main() {
  Code_acceleration
  int a,b;
  cin>>a>>b;
  ll fac1=1,fac2=1,fac3=1;
  for(int i=1;i<=a;i++){
      fac1*=i;
  }
  for (int i=1;i<=b;i++){
      fac2*=i;
  }
  int n=a-b;
  for (int i=1;i<=n;i++){
      fac3*=i;
  }
  ll ncr = fac1/(fac2*fac3);
  ll npr = fac1/fac3;
  cout<<ncr<<" "<<npr<<endl;
  return 0;
}