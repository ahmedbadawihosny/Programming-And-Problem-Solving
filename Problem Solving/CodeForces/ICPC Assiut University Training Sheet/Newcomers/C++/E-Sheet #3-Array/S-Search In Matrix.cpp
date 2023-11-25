#include <iostream>
using namespace std;

int main() {
    int n,m;
    long long x;
    bool flag=false; 
    cin>>n>>m;
    int arr[n][m];
    for (int i = 0;i < n;i++){
        for (int j = 0;j < m;j++){
            cin>>arr[i][j];
        }
    }
    cin>>x;
    for (int i = 0;i < n;i++){
        for (int j = 0;j < m;j++){
            if (arr[i][j] == x){
                flag = true;
                break;
            } 
        }
    }
    if (flag == false){
      cout<<"will take number"<<endl;
    } else {
      cout<<"will not take number"<<endl;
    }

    return 0;
}
