#include <iostream>
#include <cmath>
#define Code_acceleration ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
using namespace std;

int main() {
  Code_acceleration
  double a,b,c;
  cin>>a>>b>>c;
  double area,sum_lenth;
  if (a+b>c && a+c>b &&b+c>a){
      sum_lenth =(a+b+c)/2;
      area = sqrt(sum_lenth*(sum_lenth - a)*(sum_lenth - b)*(sum_lenth - c));
      cout << "Valid" << endl << area << endl;
  } else {
      cout << "Invalid" << endl;
  }

  return 0;
}