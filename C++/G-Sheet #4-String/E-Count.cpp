#include <iostream>
#include <string>
using namespace std;

int main(){
  string s;
  cin>>s;
  int sum=0;
  for (int i =0;i< s.size();i++){
    sum+=s[i];
  }
    cout<<sum-(s.size()*48)<<endl;

    return 0;
}