#include <iostream>
using namespace std;

int main (){
  int num1,num2,counter = 0;
  cin>>num1>>num2;

  for (int i = 0;i <= num1;i++){
      for (int z = 0;z <= num1;z++){
          if (num2 - i - z >= 0 && num2 - i -z <= num1){
              counter++;
          }
      }
  }
  cout<<counter<<"\n";

  return 0;
}