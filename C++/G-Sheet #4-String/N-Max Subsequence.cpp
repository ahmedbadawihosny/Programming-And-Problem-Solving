#include <iostream>
#include <string>
using namespace std;

int main() {
  int n,count=0;
  cin>>n;
  string s;
  cin>>s;
  char x;
  for (int i = 0;i < n;i++){
      if (i == 0){
          x = s[i];
          count++;
      } else {
          if (s[i] != x){
              count++;
              x = s[i];
          }
      }
  }
  cout<<count;
  
  return 0;
}