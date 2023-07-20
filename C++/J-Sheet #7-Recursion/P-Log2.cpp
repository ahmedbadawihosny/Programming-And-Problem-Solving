#include <iostream>
#define Code_acceleration ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
using namespace std;

int rc(ll n){
  if (n==1)return 0;
  return 1+ rc(n/2);
}

int main(){
  Code_acceleration
  ll n;
  cin>>n;
  cout<<rc(n);
  return 0;
}

/*
  ? another soulution
* #include <iostream>
* using namespace std;

* int rc(ll n,int count){
*  if (n<= 1)return count;
 * return rc(n/2,count+1);
* }

* int main() {
*  ll n;
*  cin>>n;
*  cout<<rc(n,0);
*  return 0;
* }
*/