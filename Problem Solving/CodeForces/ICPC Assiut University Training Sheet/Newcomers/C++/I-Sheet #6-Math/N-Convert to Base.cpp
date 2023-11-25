#include <iostream>
#include <algorithm>
#define Code_acceleration ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
using namespace std;

int main() {
  Code_acceleration
  int t;
  cin>>t;
  if(t==2){
      int n,x;
      cin>>n>>x;
      string s="";
      while(n>0){
          if(n%x>=10){
          s+=char((n%x)-10+'A');
          } else{ 
          s+=char((n%x)+'0');
          }
          n/=x;
      }
      reverse(s.begin(),s.end());
      cout<<s;
  }
  else{
      int x;
      ll ans=0,pwr=1;
      string n;
      cin>>n>>x;
      for(int i=n.size()-1;i>=0;i--){
          if(n[i]>='A'){
          ans+=(n[i]-'A'+10)*pwr;
          } else{
              ans+=(n[i]-'0')*pwr;
          }
          pwr*=x;
      }
      cout<<ans;
  }
  return 0;
}