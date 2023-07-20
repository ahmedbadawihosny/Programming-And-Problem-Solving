#include <iostream>
#define Code_acceleration ios::sync_with_stdio(false); cin.tie(nullptr);
#define ii int
using namespace std;

ii rc(ii n){
    if (n==1) return 1;
    if(n%2==0){
      return 1 + rc(n/2);
    }
    else {
        return 1 + rc(3*n +1);
    }
}

int main(){
  Code_acceleration
  ii n;
  cin>>n;
  cout<<rc(n);
  return 0;
}