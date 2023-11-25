#include <iostream>
#include <algorithm>
#define Code_acceleration ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
using namespace std;

int main() {
  Code_acceleration
  ll n;
  cin>>n;
  ll i=2;
  while(n>1){
    int count=0;
    while(n%i==0){
      count++;
      n/=i;
    }
    if (count>0){
      cout<<"("<<i<<"^"<<count<<")";
      if (n>1){
        cout<<"*";
      }
    }
    i++;
  }
  return 0;
}