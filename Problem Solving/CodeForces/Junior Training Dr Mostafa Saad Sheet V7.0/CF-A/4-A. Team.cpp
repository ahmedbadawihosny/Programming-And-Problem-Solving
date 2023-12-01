#include <bits/stdc++.h>
//#include "E:/Programming-And-Problem-Solving/Problem Solving/Running header files/header.hpp"
using namespace std;


void solve(){
  int t,n1,n2,n3,count=0;

  cin>>t;
  
  while(t--){
  cin>>n1>>n2>>n3;

  if ((n1+n2+n3) == 2 || (n1+n2+n3) == 3){
    count++;
  } else{}
  }

  cout<<count<<endl;
}

int main(){
  solve();
  return 0;
}