#include <iostream>
#define Code_acceleration ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
using namespace std;

int main(){
  Code_acceleration
  string s,t;
  cin>>s>>t;
  int count=1,j=0;
  for (int i = 0;i<t.size();i++){
    if (s[j] == t[i]){
        count++;
        j++;
    }
}
  cout<<count;

  return 0;
}