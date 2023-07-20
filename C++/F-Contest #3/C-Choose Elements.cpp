#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n,k;
  cin>>n>>k;
  long long arr[n];
    for (int i=0 ;i < n;i++){
    cin>>arr[i];
  }
    sort(arr,arr+n);
    reverse(arr,arr+n);
  long long sum = 0;
  for (int i=0;i < k;i++){
    if (arr[i] < 0){
      break;
    }
    sum += arr[i];
  }
  cout<<sum<<endl;
    return 0;
}