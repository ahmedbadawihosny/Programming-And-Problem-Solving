#include <iostream>
#define Code_acceleration ios::sync_with_stdio(false); cin.tie(nullptr);
#define ii int
using namespace std;

ii rc(string s,ii i){
  ii count = 0;
  if (i>=s.length())return 0;
  if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'||
          s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
      count=1;
    }
    return count + rc(s,i+1);
}

int main(){
  Code_acceleration
  string s;
  getline(cin, s);
  cout<<rc(s,0);
  return 0;
}