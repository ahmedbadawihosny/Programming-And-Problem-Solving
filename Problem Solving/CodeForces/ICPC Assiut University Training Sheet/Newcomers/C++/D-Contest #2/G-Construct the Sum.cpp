#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, s;
        cin >> n >> s;
        if (n * (n + 1) / 2 < s) {
            cout << "-1" << endl;
        } else {
            long long sum = 0;
            for (int i = n; i >= 1; i--) {
                if (sum + i <= s) {
                    sum += i;
                    cout << i << " ";
                }
            }
            cout << endl;
        }
    }

    return 0;
}