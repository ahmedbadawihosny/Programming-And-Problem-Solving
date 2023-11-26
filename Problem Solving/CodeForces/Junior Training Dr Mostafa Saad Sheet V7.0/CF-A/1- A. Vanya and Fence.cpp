#include <bits/stdc++.h>
#include "E:/Programming-And-Problem-Solving/Problem Solving/Running header files/header.hpp"
using namespace std;

void solve(ii testcase){
  ii n,h,count=0,x=0;
  cin>>n>>h;
  ii arr[n];
  for(int i=0 ; i<n ; i++){
    cin>>arr[i];
  }

  for (int i=0;i<n;i++){
    if (arr[i] <= h){
      count++;
    } else {
      x+=2;
    }
  }

  cout<<count + x;
}

ii main()
{
  Badawi();
  ii t;
  //cin>>t;
  //while(t--)
  solve(1);

  return 0;
}