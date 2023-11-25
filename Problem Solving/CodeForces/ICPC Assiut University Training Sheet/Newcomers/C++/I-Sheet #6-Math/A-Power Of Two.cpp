#include <iostream>
#include <math.h>
#define Code_acceleration ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
using namespace std;

int main() {
  Code_acceleration
    ll num;
    cin>>num;
    double res = log2(num)/log2(2);
    if ((res - (long long)res) != 0){
        cout<<"NO"<<endl;
    } else {
        cout<<"YES"<<endl;
    }
    return 0;
}