#include <iostream>
#include <cmath>
#define Code_acceleration ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
using namespace std;

int main() {
  Code_acceleration
  int t;
  cin>>t;
  int counter=1;
  while(counter<=t){
      int n;
      cin>>n;
      int x1,y1,x2,y2,a,b,c,d;
      cin>>x1>>y1>>x2>>y2;
      a=x1; b=y1; c=x2; d=y2;
      for (int i=1;i<n;i++){
          cin>>x1>>y1>>x2>>y2;
          a =max(a,x1);
          b =max(b,y1);
          c =min(c,x2); 
          d =min(d,y2); 
      }
      if(c > a && d > b){
      cout<<"Case #"<<counter<<": "<<(c - a) * (d - b)<<"\n";
    } else {
      cout<<"Case #"<<counter<<": "<<0<<endl;
    }
    counter++;
  }
    return 0;
}