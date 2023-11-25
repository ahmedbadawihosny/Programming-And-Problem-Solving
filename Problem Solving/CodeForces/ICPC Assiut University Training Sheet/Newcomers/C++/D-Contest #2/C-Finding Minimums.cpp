#include <iostream>
using namespace std;

int main() {
  int n,k;
  cin>>n>>k;
  int min,flag = true,count=0;
  for (int i =1;i<=n;i++){
    int x;
    cin>>x;
    if (flag){
      min = x;
      flag=false;
    } else {
      if (x < min){
        min = x;
      }
    }
    count++;
    if (count == k || i == n){
      cout<<min<<" ";
      count = 0;
      flag = true;
    }
  }
  return 0;
}
