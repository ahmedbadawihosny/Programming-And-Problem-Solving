#include <iostream>
#define Code_acceleration ios::sync_with_stdio(false); cin.tie(nullptr);
#define ii int
using namespace std;

void rc2(ii i, ii j, ii n){
  if (j==n+i)return;
  if (j>=n-1-i)
  cout<<"*";
  else 
  cout<<" ";
  rc2(i,j+1,n);
}

void rc1(ii i,ii n){
  if(n==i)return;
  rc2(i,0,n);
  cout<<endl;
  rc1(i+1,n);
}

int main(){
  Code_acceleration
  ii n;
  cin>>n;
  rc1(0,n);
  return 0;
}