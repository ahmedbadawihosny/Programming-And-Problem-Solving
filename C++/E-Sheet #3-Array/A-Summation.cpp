#include<iostream>
using namespace std;

int main() {
  int x;
  long long sum = 0;
  cin>>x;
  for(int i = 1;i <= x;i++){
    int arr[x];
    cin>>arr[x];
    sum+=arr[x];
  }
  cout<<abs(sum)<<endl;

  return 0;
}