#include <iostream>
using namespace std;
int main() {
    int a,b;
    char opr;
    cin>>a>>opr>>b;

    bool flag;

    if (opr=='<') {
        flag=(a<b);
    } else if (opr=='>') {
        flag = (a>b);
    } else if (opr=='=') {
        flag = (a==b);
    }

    if (flag) {
        cout<<"Right";
    } else {
        cout<<"Wrong";
    }

    return 0;
}
