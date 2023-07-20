#include <iostream>
#include <iomanip>
using namespace std;

  void prime (int n){
    bool flag =false;
  for (int i = 2;i*i <= n;i++){
    if (n%i== 0){
      flag =true;
      break;
    } 
  }
  if (flag ==0){
    cout<<"YES"<<endl;
  } else {
    cout<<"NO"<<endl;
  }
  }
  
  int main() {
  int t;
  cin>>t;
  while(t--){
    int n;
        cin>>n;
      if (n==1){
    cout<<"NO"<<endl;
    continue;
    } 
    prime(n);
  }

    return 0;
}