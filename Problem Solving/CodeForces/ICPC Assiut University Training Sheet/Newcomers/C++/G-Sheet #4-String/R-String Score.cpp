#include <iostream>
#include <string>

using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;
  int score = 0;
  for (int i = 0; i < s.size(); i++) {
      char c = s[i];
      switch (c) {
          case 'V':
              score += 5;
              break;
          case 'W':
              score += 2;
              break;
          case 'Z':
              if (i != s.size() - 1){
              if (s[i+1]=='W'){
                  score /= 2;
                  s[i+1]='0';
              } else if (s[i+1]=='V'){
                  score /= 5;
                  s[i+1]='0';
              }
              }
              break;
          case 'Y':
            if (i != s.size() - 1){
              s.push_back(s[i+1]);
              s[i+1]='0';
            }
              break;
          case 'X':
            if (i != s.size() - 1){
              s[i+1]='0';
            }
      }
  }
  cout << score << endl;
  
  return 0;
}