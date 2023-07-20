#include <iostream>
using namespace std;
int main() {
    int l1, r1, l2, r2,x,y;
    cin >> l1 >> r1 >> l2 >> r2;

    x=max(l1, l2);
    y=min(r1, r2);

    if (x<=y) {
        cout<<x<<" "<<y;
    } else {
        cout<<-1;
    }

    return 0;
}
