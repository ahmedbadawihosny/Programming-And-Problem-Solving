#include <iostream>
#define Code_acceleration ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
using namespace std;


int arr[14] = {4,7,44,77,47,74,444,777,447,474,744,774,747,477}; 
int main(){
  Code_acceleration
  int n;
  cin>>n;
  for (int i=0;i<14;i++){
  if (n % arr[i] == 0){
      cout<<"YES";
    return 0;
    } 
  }
  cout<<"NO";
  return 0;
}