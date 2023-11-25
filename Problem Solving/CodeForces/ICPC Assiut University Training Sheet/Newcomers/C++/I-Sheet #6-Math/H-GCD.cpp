#include <iostream>
#define Code_acceleration ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
using namespace std;

int main() {
  Code_acceleration
    ll a,b,gcd,lcm,X;
    cin>>a>>b;
    ll A=a,B=b;
    
    while (B != 0){
        X=B;
        B=A%B;
        A=X;
    }
      gcd=A;
      lcm=(a*b)/gcd;
    cout<<gcd<<" "<<lcm;
    return 0;
}
/*
* another solution

* #include <iostream>
* #include <algorithm>
* using namespace std;
*
* int main() {
*  Code_acceleration
*     long long a,b;
*     cin>>a>>b;
*     cout<<__gcd(a,b)<<" "<<(a*b/__gcd(a,b));
*     return 0;
* }

*/