#include <iostream>
using namespace std;

int main() {
  int n;
  cin>>n;
  int arr[n];
  int x=INT_MAX;
  for (int i = 1;i < n;i++){
    cin>>arr[i];
    x=min(x,arr[i]);
  } 
  for (int i = 1;i < n;i++){
    if (arr[i] == x){
        cout<<arr[i]<<" "<<i<<endl;
        break;
    }
  }

  return 0;
}