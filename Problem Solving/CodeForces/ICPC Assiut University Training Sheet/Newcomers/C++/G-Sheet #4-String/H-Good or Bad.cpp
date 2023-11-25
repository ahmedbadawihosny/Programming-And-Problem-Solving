#include <iostream>
#include <string>
using namespace std;

int main() {
  int t;
  cin>>t;
  while (t--){
    string s;
    cin>>s;
    string a,b= "101",c= "010";
    int count=0;
    for (int i = 0;i <= s.size();i++){
        a=s.substr(i,3);
        if (a==b || a==c){
          cout<<"Good"<<endl;
          count++;
          break;
        }
    }
    if (count==0){
      cout<<"Bad"<<endl;
    }   
  }
    return 0;
}
