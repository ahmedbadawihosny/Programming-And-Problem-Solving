#include <iostream>
using namespace std;

int main() {
  long long n;
  cin>>n;
  int arr[n];
  for (int i = 0;i < n;i++){
  cin>>arr[i];
  if (arr[i] % 2 != 0){
      cout<<0<<endl;
      return 0;
  }
  }
  long long x = 0;
  int flag=0;
  while (flag == 0){
  for (int i = 0;i < n;i++){
      if (arr[i] % 2 == 0){
          arr[i] = arr[i]/2;
      } else {
          flag = 1;
          break;
      }
  }
  x++;
  }
  cout<<x-1<<endl; 
  return 0;
}