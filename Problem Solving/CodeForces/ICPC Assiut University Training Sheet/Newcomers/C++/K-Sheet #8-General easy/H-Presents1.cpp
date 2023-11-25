#include <iostream>
#define Code_acceleration ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
using namespace std;

int main(){
  Code_acceleration
  int n;
  cin>>n;
  int j,arr[n];
  for(int i=1;i<=n;i++){
  cin>>j;
  arr[j]=i;
  }
  for(int i=1;i<=n;i++){
    cout<<arr[i]<<" ";
    }
    return 0;
}