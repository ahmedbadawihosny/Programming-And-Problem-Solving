#include <iostream>
using namespace std;

int main() {
    int n,x;
    bool flag = false;
    cin>>n;
    long long arr[n];
    for (int i = 0;i < n;i++){
        cin>>arr[i];
    } 
    cin>>x;
    for (int i = 0;i < n;i++){
        if (x == arr[i]){
            cout<<i<<endl;
            flag = true;
            break;
        } 
    } 
    if (flag == false){
        cout<<-1<<endl;
    }
    
    return 0;
}