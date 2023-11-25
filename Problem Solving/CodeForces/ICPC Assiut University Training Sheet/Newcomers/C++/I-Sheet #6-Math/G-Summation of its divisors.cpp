#include <iostream>
#include <cmath>
#define Code_acceleration ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
using namespace std;

int main() {
  Code_acceleration
  ll n,sum=0;
  cin>>n;
  for(ll  i=1 ;i*i<=n ;i++){

    if(n%i==0){
      sum+=i;
      if((n/i) != i)
          sum+=(n/i);
      
    }
  }
  cout<<sum<<endl;
}