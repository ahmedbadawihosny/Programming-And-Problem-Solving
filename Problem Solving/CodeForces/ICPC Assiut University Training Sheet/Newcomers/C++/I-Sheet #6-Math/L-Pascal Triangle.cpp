#include <iostream>
#define Code_acceleration ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
using namespace std;

int main() {
  Code_acceleration
  int n;
  cin>>n;
  int pascal;
  for(int i=0;i<n;i++){
      pascal=1;
      for (int j=0;j<=i;j++){
        cout<<pascal<<" ";
        pascal = pascal * (i-j)/(j+1);
      }
      cout<<endl;
  }
    
    return 0;
}