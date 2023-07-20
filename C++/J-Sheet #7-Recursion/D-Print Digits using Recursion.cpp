#include <iostream>
#define Code_acceleration ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define ii int
using namespace std;

void rc(ll n){
  if (n==0) return;
  rc(n/10);
  cout<<n%10<<" ";
}

void test(ii t){
  if (t==0)return;
  ii x;
  cin>>x;
  if (x==0) cout<<"0";
  else rc(x);
  cout<<endl;
  test(t-1);
}

int main(){
  Code_acceleration
  ii t;
  cin>>t;
  test(t);
  return 0;
}