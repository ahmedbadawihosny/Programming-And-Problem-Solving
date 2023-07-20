#include <iostream>
#define Code_acceleration ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
using namespace std;

int main(){
  Code_acceleration
  int n,p,q,count=0;
  cin>>n;
  while (n--){
    cin>>p>>q;
    if (q-p >= 2){
        count++;
    } 
  }
  cout<<count;
    return 0;
}