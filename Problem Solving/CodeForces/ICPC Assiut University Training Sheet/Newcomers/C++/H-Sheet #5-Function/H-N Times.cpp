#include <iostream>
using namespace std;

void print (int n, char c){
      for (int i=1;i <= n;i++){
    cout<<c<<" ";
    }
  }

  int main() {
  int t;
  cin>>t;
  while(t--){
    int n;
    char c;
    cin>>n>>c;
    print(n,c);
    cout<<endl;
  }

  return 0;
}