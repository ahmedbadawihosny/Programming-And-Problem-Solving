#include <iostream>
#define Code_acceleration ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define bo bool
using namespace std;

ll start;
bo rc(ll num){
    if (start<num){
        return false;
    }
    else if (start == num){
        return true;
    }
    else{
        return rc(num * 10) || rc(num * 20);
    }
}

int main(){
  Code_acceleration
    int t;
    cin>>t;
    while (t--){
        cin>>start;
        if (rc(1) == true){
            cout<<"YES"<<"\n";
        } else {
            cout<<"NO"<<"\n";
        }
    }
    return 0;
}