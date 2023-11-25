#include <iostream>
#define Code_acceleration ios::sync_with_stdio(false); cin.tie(nullptr);
#define ii int
using namespace std;

ii loop(ii num){
  if (num==0)
  return 0;
  else 
  for (ii i=num; i>=1; i--){
    cout<<i;
    if (i==1)
    {
      break;
    }
    cout<<" ";
  }
  return num;
}

int main(){
  Code_acceleration
  ii num;
  cin>>num;
  loop(num);
}