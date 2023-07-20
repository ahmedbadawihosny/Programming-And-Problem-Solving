#include <iostream>
#include <algorithm>
#define Code_acceleration ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
using namespace std;

void mult (string a , string b ){
  string m;
  reverse (a.begin() , a.end());
  reverse (b.begin() , b.end());

  for(int i=0 ; i<a.size();i++){
      for(int j=0 ; j<b.size();j++){
          int pos = i+j;
          int x =(a[i]-'0')*(b[j]-'0');
          if(m.size()<= pos ){
              m+='0';
          }
          while(x!=0){
        if(m.size()<= pos ){
            m+='0';
        }
        int temp = x%10 + m[pos]-'0';
        m[pos]=temp%10 +'0';
        temp/=10;
        x/=10;
        x+=temp;
        pos++;
          }
      }
  }
  reverse (m.begin(),m.end());
  cout<<m;
  }

void add (string s , string s2){
  string  res;
  ll sum=0 , carry=0 ;
  reverse(s.begin() , s.end());

  for(int i=0 ; i<s.size() || i<s2.size() ; i++){
      if(i>=s.size()){
          sum=s2[i]-'0'+carry;
          res+=sum%10+'0';
          carry=sum/10;
      } else if (i>=s2.size()){
          sum=s[i]-'0'+carry;
          res+=sum%10+'0';
          carry=sum/10;
      }
      else{
          sum=s[i]-'0'+s2[i]-'0'+carry;
          res+=sum%10+'0';
          carry=sum/10;
      }
  }
  if (carry>0){
      res+=carry+'0';
  }
  reverse(res.begin() , res.end());
  cout<<res;
  }

int main(){
  Code_acceleration
    string a , b="9999";
    cin>>a;
    add(a,b);
    cout<<"\n";
    mult(a,b);
    return 0;
}
