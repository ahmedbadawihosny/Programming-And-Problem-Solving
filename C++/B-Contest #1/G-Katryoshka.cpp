#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  long long e,m,b;
  cin>>e>>m>>b;
  long long res=0;
  if (e == 0 || b == 0){
    cout<<0;
  } else {
    if ((m >= e && m >= b) || (m >= b && m < e) || (m < b && m >= e)){
        res = min(e,b);
        cout<<res<<endl;
    } else if (m < b && m < e){
      res = m;
      e -= m;
      b -= m;
      res += min (e/2,b);
      cout<<res<<endl;
    }
  }
    return 0;
}