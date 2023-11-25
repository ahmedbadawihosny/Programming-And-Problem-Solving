#include <iostream>
#define Code_acceleration ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
using namespace std;

int main(){
  Code_acceleration
    int t;
    cin>>t;
    string i1,i2;
    int count=1;
    cin>>i1;
    if (t==1){
        cout<<1;
        return 0;
    }
    t--;
    while (t--){
        cin>>i2;
        if (i1[1] == i2[0]){
            count++;
        }
        i1=i2;
    }
    cout<<count;
    return 0;
}