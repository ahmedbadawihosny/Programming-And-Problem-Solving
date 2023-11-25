#include <bits/stdc++.h>
using namespace std;

int main() {
  string s; 
  int flag=false;
  while(cin>>s){
      reverse(s.begin(), s.end());
      if (flag){
      cout<<" ";
      }
      flag = true;
      cout<<s;
  }

  return 0;
}