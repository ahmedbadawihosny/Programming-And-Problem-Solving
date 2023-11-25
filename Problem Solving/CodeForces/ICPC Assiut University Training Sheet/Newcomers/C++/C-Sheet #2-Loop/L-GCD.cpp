#include <iostream>
using namespace std;

int main (){
  int num1,num2,gcd;
  cin>>num1>>num2;
  int max,min;
  if (num1 >= num2){
      max = num1;
      min = num2;
  } else {
      max = num1;
      min = num2;
  }
  for (int i =1;i <= max;i++){
      if (num1 % i == 0 && num2 % i == 0){
        gcd = i;
      }
  }
    cout<<gcd<<"\n";

  return 0;
}
