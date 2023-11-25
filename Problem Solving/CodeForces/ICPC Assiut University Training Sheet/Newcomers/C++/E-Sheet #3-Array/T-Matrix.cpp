#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n][n];
    long long main=0,secondary=0;
    for (int i = 0;i < n;i++){
      for (int j = 0;j < n;j++){
        cin>>arr[i][j];
        if (i == j)
        main += arr[i][j];
        if ((i+j) == n-1)
        secondary += arr[i][j];
    }
  }
      cout<<abs(main - secondary)<<endl;

  return 0;
}
