#include <iostream>
using namespace std;

int main(){
  long long n;
  cin>>n;
  if (n%2==0) {
        cout<<(n/2)*(n+1);
    } else {
        cout<<n*((n+1)/2);
    }
    
    return 0;
}