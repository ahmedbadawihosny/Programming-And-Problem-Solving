#include <iostream>
#define Code_acceleration ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
using namespace std;

int main(){
  Code_acceleration
  int a,b,count=0;
  cin>>a>>b;
  while (a<=b){
      a*=3;
      b*=2;
      count++;
  }
  cout<<count;
    return 0;
}