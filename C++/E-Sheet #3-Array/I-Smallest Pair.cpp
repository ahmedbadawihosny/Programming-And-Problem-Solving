#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        long long sum = 0,min = 1e9;
        int arr[n];
        for (int i = 0;i < n;i++) {
            cin >> arr[i];
        }
        for (int i = 0;i < n;i++){
            for (int j = i+1;j < n;j++){
                sum = arr[i] + arr[j] + ((j+1)-(i+1));
                if (sum < min)
                    min = sum;
                    sum =0;
            }
        }
        cout<<min<<endl;
    }

    return 0;
}


