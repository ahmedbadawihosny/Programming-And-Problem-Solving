#include <iostream>
#include <algorithm>
using namespace std;

int shiftarray(int arr[] ,int n){
  int count =0;
  for (int i= 0;i < n;i++){
        cin>>arr[i];
        if (arr[i] == 0){
          count++;
        } else {
          cout<<arr[i]<<" ";
        }
  }
  return count;
}

int main() {
  int n;
  cin>>n;
  int arr[n];
  int zeros = shiftarray(arr,n);
  for (int i =0;i < zeros;i++){
  cout<<0<<" ";
  }
  return 0;
}