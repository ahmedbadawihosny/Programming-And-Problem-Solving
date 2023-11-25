#include <iostream>

using namespace std;
bool isPalindrome(string s) {
    int left = 0, right = s.length() - 1;
    while(left < right) {
        if(s[left] != s[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}
bool isWonderful(int N) {
    if(N % 2 == 0) {
        return false;
    }
    string binary = "";
    while(N > 0) {
        binary += to_string(N % 2);
        N /= 2;
    }
    return isPalindrome(binary);
}

int main() {
    int N;
    cin >> N;
    if(isWonderful(N)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}