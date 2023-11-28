#include <bits/stdc++.h>
//#include "E:/Programming-And-Problem-Solving/Problem Solving/Running header files/header.hpp"
using namespace std;

void solve(){
  int n,countA=0,countB=0;
  string str;
  cin>>n>>str;

  for (int i = 0;i < n;i++){
    if (str[i] == 'A'){
      countA++;
    } else {
      countB++;
    }
  }

  if (countA > countB){
    cout<<"Anton";
  } else if (countB > countA){
    cout<<"Danik";
  } else {
    cout<<"Friendship";
  }
}

int main()
{
  //Badawi();
  //int t=1;
  //cin>>t;
  //while(t--)
  solve();

  return 0;
}