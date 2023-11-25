#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s, t;
        cin >> s >> t;
        string result;
        int x = s.length();
        int y = t.length();
        int min_length = min(x, y);

        for (int i = 0; i < min_length; i++) {
            result += s[i];
            result += t[i];
        }
        if (x > y) {
            result += s.substr(y);
        } else {
            result += t.substr(x);
        }
        cout << result << endl;
    }
    return 0;
}