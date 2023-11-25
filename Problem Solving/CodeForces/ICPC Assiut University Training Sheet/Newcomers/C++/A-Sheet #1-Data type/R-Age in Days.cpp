#include <iostream>
using namespace std;

int main(){

  int inputdays ;
  cin>>inputdays;
  int year = inputdays / 365;
  inputdays -= 365 * year;
  int months = inputdays / 30;
  inputdays -= 30 * months;
  cout<<year<<" years"<<endl;
  cout<<months<<" months"<<endl;
  cout<<inputdays<<" days"<<endl;

return 0;
}