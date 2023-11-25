#include <iostream>
using namespace std;

int main() {
  int n,min=1e5,counter=0;
  cin>>n;
  int arr[n];
  for (int i = 0;i < n;i++){
    cin>>arr[i];
    if (arr[i] < min){
        min = arr[i];
    }
  }
    for (int i = 0;i < n;i++){
    if (arr[i] == min){
        counter++;
    }
  }
  if (counter % 2 == 0){
    cout<<"Unlucky"<<endl;
  } else {
    cout<<"Lucky"<<endl;
  }

  return 0;
}
