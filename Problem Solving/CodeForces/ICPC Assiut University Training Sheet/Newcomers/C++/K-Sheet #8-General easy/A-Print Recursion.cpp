#include <iostream>
#define Code_acceleration ios::sync_with_stdio(false); cin.tie(nullptr);
#define ii int
using namespace std;

void  PrintRecursion(ii num){
  if (num ==0 )
  return ;
  else 
  cout<<"I love Recursion"<<endl;
  return PrintRecursion(num-1);
}

int main(){
  Code_acceleration
  ii num;
  cin>>num;
  PrintRecursion(num);
}