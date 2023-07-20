#include <iostream>
#define Code_acceleration ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define ii int
using namespace std;

ll rc(ii n,ii r){
    if (r == 0)
      return 1;
    else 
        return ((n * rc(n-1, r-1))/r);
}

int main(){
  Code_acceleration
    ii n,r;
    cin>>n>>r;
    cout<<rc(n, r);
    return 0;
}