#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
  string s;
  int open =1;
  while(getline(cin,s)){
      bool flag=0; 
      if (s.size() == 0 || s == " "){
            continue;
      }
      for (int i=0 ; i<s.size() ; i++){
          if (s[i] == '/' && s[i+1] == '/' && open){
              break;
          } else if(s[i] == '/' && s[i+1] == '*'){
                  i++;
                  open = 0;
          } else if (s[i] == '*' && s[i+1] == '/' && !open){
                i++;
                open=1;
          } else if (open == 1){
              cout<<s[i];
              flag = 1;
          }
      }
      if (flag && open == 1){
          cout<<endl;
      }
  }

  return 0;
}