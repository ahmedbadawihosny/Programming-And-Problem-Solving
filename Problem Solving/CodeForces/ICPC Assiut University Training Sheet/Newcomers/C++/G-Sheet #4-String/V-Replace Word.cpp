#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  string s;
  cin>>s;
  int size = s.size();
  for (int i = 0; i < size; i++){
  if (s[i] == 'E' && s[i+1] == 'G' && s[i+2] == 'Y' && s[i+3] == 'P' && s[i+4] == 'T'){
          i+=4;
          cout<<" ";
    } else {
      cout<<s[i];
        }
  }

  return 0;
}