#include <iostream>
#include <cmath>
#define Code_acceleration ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
using namespace std;

int main() {
  Code_acceleration
  ll n;
  bool isPrime = true;
  cin>>n;
  if (n ==0 || n == 1) {
      isPrime = false;
  } else {
  for (int i = 2; i<=sqrt(n);i++) {
          if (n % i == 0) {
              isPrime = false;
              break;
          }
      }
  }
  if (isPrime) {
      cout<<"YES"<<endl;
  } else {
      cout<<"NO"<<endl;
  }
  
  return 0;
}