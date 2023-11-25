#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  cin>>s;
  int freq[123]={};
  for (int i =0;i < s.size();i++){
    freq[s[i]]++;
  }
  for (int i =0;i < 123;i++){
  if (freq[i] != 0){
    cout<<(char) i<<" : "<<freq[i]<<endl;
  }
  }
    return 0;
}
