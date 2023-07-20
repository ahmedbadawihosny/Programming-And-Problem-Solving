#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#define Code_acceleration ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
using namespace std;

int main() {
  Code_acceleration
  string n;
  ll x;
  cin>>n>>x;
  ll len=n.length();
  ll rem=0;
  for (int i = 0; i < len; i++) {
      rem = (rem * 10 + (n[i] - '0')) % x;
  }

  if (rem ==0)
      cout << "YES" << endl;
  else
      cout << "NO" << endl;

  return 0;
}