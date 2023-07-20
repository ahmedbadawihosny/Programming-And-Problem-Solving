#include <iostream>
#include <algorithm>
using namespace std;

const int s = 1000;
int  distinct(int arr [s],int n){
  int count = 1;
  for (int i = 1; i <n;i++){
      if (arr[i] != arr[i-1]){
      count++;
      }
  }
  return count;
}

int main() {
  int n;
  cin>>n;
  if (n == 0){
  cout<<0;
  return 0;
  }
  int arr[s];
  for (int i=0;i<n;i++){
  cin>>arr[i];
  }
  sort(arr,arr+n);
  cout<<distinct(arr,n)<<endl;
  return 0;
}
