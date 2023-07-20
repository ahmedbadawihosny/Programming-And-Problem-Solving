#include <iostream>
#define Code_acceleration ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
using namespace std;

ll fact(ll num){
  if (num == 0 || num == 1)
    return 1;
  else 
    return num * fact(num-1);
}

int main(){
  Code_acceleration
  ll num;
  cin>>num;
  cout<<fact(num);
  return 0;
}