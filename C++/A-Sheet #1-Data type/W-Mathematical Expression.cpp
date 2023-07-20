#include <iostream>
using namespace std;
int main() {
    int x,y,z,res;
    char opr,opr2;
    cin>>x>>opr>>y>>opr2>>z;

    if (opr=='+') {
        res = x + y;
    } else if (opr=='-') {
        res = x - y;
    } else if (opr=='*') {
        res = x * y;
    }

    if (res==z && opr2=='=') {
        cout<<"Yes";
    } else {
        cout<<res;
    }

    return 0;
}
