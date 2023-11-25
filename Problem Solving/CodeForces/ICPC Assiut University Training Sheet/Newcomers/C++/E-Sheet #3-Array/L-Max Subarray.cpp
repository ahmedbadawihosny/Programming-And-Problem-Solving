#include <iostream>
using namespace std;

int main() {
  int t;
  cin>>t;
  while (t--){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0;i < n;i++)
        cin>>arr[i];

    for (int j = 0;j < n;j++){
        for (int k = j;k < n;k++){
            int max = -1e5;
            for (int i = j;i <= k;i++){
                if (arr[i] > max)
                    max = arr[i];
            }
            cout<<max<<" ";
        }
    }
    cout<<endl;
  }

  return 0;
}
