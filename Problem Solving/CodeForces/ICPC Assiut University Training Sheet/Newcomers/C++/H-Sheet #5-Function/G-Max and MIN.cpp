#include <iostream>
using namespace std;

int get_min(int arr[] , int n){
  int min = INT_MAX;
  for (int i=0;i < n;i++){
    if (arr[i] < min){
      min = arr[i];
    }
  }
  return min;
  }

  int get_max(int arr[] , int n){
  int max = INT_MIN;
  for (int i=0;i < n;i++){
    if (arr[i] > max){
            max = arr[i];
        }
  }
  return max;
  }

  int main() {
  int n;
  cin>>n;
  int arr[n];
  for (int i =0;i < n;i++){
    cin>>arr[i];
  }
  cout<<get_min(arr, n)<<" "<<get_max(arr, n)<<endl;

  return 0;
}