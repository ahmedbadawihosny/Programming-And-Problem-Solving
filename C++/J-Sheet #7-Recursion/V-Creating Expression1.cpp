#include <iostream>
#define Code_acceleration ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define bo bool
using namespace std;

ll n,res,arr[21];
bo rc(ll sum, ll x) {
    if (x==n){
        return sum==res;
    }
    bo flag1 = rc(sum + arr[x], x+1);
    bo flag2 = rc(sum - arr[x], x+1);
    return flag1 || flag2;
}

int main(){
  Code_acceleration
    cin>>n>>res;
    for (int i=0;i<n;i++){
        cin>>arr[i];
    } if (rc(arr[0], 1)){
        cout<<"YES";
    } else {
        cout<<"NO";
    }
}