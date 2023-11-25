#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
  int n,t;
  string s;
  cin >>n>>t>>s;
  string query;
  int l, r;
  while (t--) { 
      cin>>query;
      if (query == "pop_back") {
          s.pop_back();
      } else if (query == "front") {
          cout << s.front() << endl;
      } else if (query == "back") {
          cout << s.back() << endl;
      } else if (query == "sort") {
          cin >> l >> r;
          sort(s.begin() + min(l,r)-1,s.begin() +max(l,r));
      } else if (query == "reverse") {
          cin >> l >> r;
          reverse(s.begin() + min(l,r)-1,s.begin() + max(l,r));
      } else if (query == "print") {
          int pos;
          cin >> pos;
          cout << s[pos - 1] << endl;
      } else if (query == "substr") {
          cin >> l >> r;
          for (int i = min(l,r)-1;i<=max(l,r)-1;i++){
              cout<<s[i];
          }
          cout << endl;
      } else  {
          char x;
          cin >> x;
          s.push_back(x);
      }
  }

  return 0;
}