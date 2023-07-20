#include <iostream>
using namespace std;

int main(){
  int num1,num2;
  char opr;
  cin>>num1>>opr>>num2;

switch (opr){
  case '+':
  cout<<num1+num2<<endl;
  break;
  case '-':
  cout<<num1-num2<<endl;
  break;
  case '*':
  cout<<num1*num2<<endl;
  break;
  case '/':
  cout<<num1/num2<<endl;
  default:
  break;
}

  return 0;
}