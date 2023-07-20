#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n,x=0,res=0,count=0;
  cin>>n;
  int arr[n];
    for (int i=0; i<n; i++){
      cin>>arr[i];
    }
    sort(arr,arr+n);

    for (int i=0; i<n; i++){
      if (i == 0){
        x = arr[i];
        res =1;
      } else {
        if (x == arr[i]){
            res++;
        } else if (x+1 == arr[i]){
            count += res;
            x = arr[i];
            res = 1;
        } else {
            res = 1;
            x = arr[i];
        }
      }
  }
    cout<<count<<endl;
    return 0;
}