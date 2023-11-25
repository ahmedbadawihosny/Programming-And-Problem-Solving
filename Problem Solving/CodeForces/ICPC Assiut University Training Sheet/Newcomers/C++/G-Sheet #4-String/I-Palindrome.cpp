#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  string s;
  cin>>s;
  string x=s;
  reverse(s.begin(),s.end());
  if (x == s){
  cout<<"YES";
  } else {
  cout<<"NO";
  }
    return 0;
}
