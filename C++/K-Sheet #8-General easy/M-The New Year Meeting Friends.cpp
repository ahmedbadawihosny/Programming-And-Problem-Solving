#include <iostream>
#define Code_acceleration ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
using namespace std;

int main(){
  Code_acceleration
  int a,b,c;
  cin>>a>>b>>c;
  cout<<(max(max(a,b),c)) - (min(min(a,b),c));
  return 0;
}