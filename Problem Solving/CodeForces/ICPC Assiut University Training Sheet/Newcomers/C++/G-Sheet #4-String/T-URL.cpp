#include <iostream>
#include <string>
using namespace std;

int main() {
  string s; 
  cin>>s;
  int size = s.size();
  for (int i=0;i < size;i++){
    if (s[i] == '?'){
      i++;
      for (int j=i;j < size;j++){
          if (s[j] == '='){
              cout<<": ";
              continue;
          }
          if (s[j] == '&'){
              cout<<endl;
              continue;
          }
          cout<<s[j];
      }
      break;
  }
}

  return 0;
}