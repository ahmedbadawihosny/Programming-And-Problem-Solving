#include <iostream>
#include <cmath>
#define Code_acceleration ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
using namespace std;

int main() {
  Code_acceleration
  int n;
  cin >> n;
  double numdigits = 0;
  for (int i = 1; i <= n; i++) {
      numdigits += log10(i);
  }
  numdigits++;
  int res = numdigits;
  cout<<"Number of digits of "<<n<<"! is "<<res<< endl;

  return 0;
}