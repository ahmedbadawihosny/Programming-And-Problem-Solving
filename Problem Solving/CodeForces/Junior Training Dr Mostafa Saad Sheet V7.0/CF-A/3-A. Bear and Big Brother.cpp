#include <bits/stdc++.h>
//#include "E:/Programming-And-Problem-Solving/Problem Solving/Running header files/header.hpp"
using namespace std;


void solve(){
  int l,b,count=0;
  cin>>l>>b;

  while(true){
    l *= 3;
    b *= 2;

    count++;

    if (l > b){
      break;
    }
  }

  cout<<count<<"\n";
}

int main(){
  solve();
  return 0;
}