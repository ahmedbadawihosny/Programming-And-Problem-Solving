#include <iostream>
#include <string>
#define Code_acceleration ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
using namespace std;

int main(){
  Code_acceleration
    string s;
  cin >> s;
  int n = s.length();
  for (int i = 0; i < n/2; i++) {
      if (s[i] == '?' && s[n-i-1] == '?') {
          s[i] = 'a';
          s[n-i-1] = 'a';
      } else if (s[i] == '?') {
          s[i] = s[n-i-1];
      } else if (s[n-i-1] == '?') {
          s[n-i-1] = s[i];
      } else if (s[i] != s[n-i-1]) {
          cout << -1 << endl;
          return 0;
      }
  }
  if (n % 2 == 1 && s[n/2] == '?') {
      s[n/2] = 'a';
  }
  cout << s << endl;
  return 0;
}