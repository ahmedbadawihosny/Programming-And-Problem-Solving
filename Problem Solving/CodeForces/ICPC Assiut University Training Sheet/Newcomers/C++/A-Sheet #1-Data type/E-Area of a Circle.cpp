#include <iostream>
#include<iomanip>
using namespace std;
int main(){
  double n;
  cin>>n;
  cout<<fixed << setprecision(9)<<(n*n)*3.141592653;

  return 0;
}