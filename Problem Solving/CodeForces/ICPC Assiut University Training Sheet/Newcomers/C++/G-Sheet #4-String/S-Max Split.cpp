#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
  char arr[1000][1000];
  string s;
  cin>>s;
  int row=0,column=0,count=0,r=0,l=0;
  for (int i=0;i < s.size();i++) {
      if (s[i] == 'R'){
          arr[row][column] = s[i];
          r++;
      } else {
          arr[row][column] =s[i];
          l++;
      }
      column++;
      if (r == l && r > 0){
          row++;
          column=0;
          count++;
          r=0;
          l=0;
      }
  }
  cout<<count<<endl;
  for (int i=0;i < 1000;i++){
      if (arr[i][0] != 'R' && arr[i][0] != 'L'){
          continue;
      }
      cout<<arr[i]<<endl;
  }
  
  return 0;
}