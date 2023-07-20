#include <iostream>
using namespace std;

int main() {
  int t;
  cin>>t;
  while (t--) {
    int n,counter=0;
    cin>>n;
    int arr[n];
    for (int i = 0;i < n;i++){
        cin>>arr[i];
    }
    for (int i = 0;i < n;i++){
        for (int j = i;j < n;j++){
          if (arr[j] >= arr[j-1])
          counter++;
          else 
          break;
        }
    }
    cout<<counter+n<<endl;
  }

  return 0;
}