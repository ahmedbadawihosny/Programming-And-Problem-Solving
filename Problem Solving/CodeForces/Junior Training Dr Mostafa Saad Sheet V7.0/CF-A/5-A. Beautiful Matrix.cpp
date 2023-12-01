#include <bits/stdc++.h>
//#include "E:/Programming-And-Problem-Solving/Problem Solving/Running header files/header.hpp"
using namespace std;


void solve(){
  int arr[5][5];
  int count = 0;

  for (int i=0; i<5; i++){
    for(int j=0; j<5; j++){
      cin>>arr[i][j];
  }
}

  for (int i=0; i<5; i++){
    for(int j=0; j<5; j++){
      if (arr[i][j] == 1){
        swap(arr[i+1][j],arr[i][j]);
        count++;
      } else if (arr[2][j] == 1){
        break;
      }
  }
}

  for(int i; i< 5;i++){
    for (int j; j<5; j++){
      if (arr[2][j] == 1){
        swap(arr[2][j-1],arr[2][j]);
      } else if (arr[2][2] == 1){
        break;
      }
    }
  }

  cout<<count<<endl;
}

int main(){
  solve();
  return 0;
}