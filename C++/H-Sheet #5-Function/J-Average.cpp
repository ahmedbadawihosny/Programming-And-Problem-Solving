#include <iostream>
#include <iomanip>
using namespace std;

void printaverag(double arr[] , int n);

int main() {
int n;
cin>>n;
double arr[n]; 	
for (int i = 0;i < n;i++){
  cin>>arr[i];
}
printaverag(arr, n);
  return 0;
}

void printaverag(double arr[] , int n){
      double mean =0;
  for (int i =0;i < n;i++){	
    mean += arr[i];
  }
  cout<<fixed<<setprecision(7)<<mean/n;
}