#include <iostream>
#define Code_acceleration ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
using namespace std;

int main() {
  Code_acceleration

  ll num1,num2,sum_all,x ,sumeven,sumodd,temp,even1,even2,odd1,odd2;

  cin>>num1>>num2;
  if(num2<num1){
    swap(num1,num2);
  }
  temp = num1 -1;

  if(temp!=1){
      sum_all = (num2*(num2+1))/2;
      x = (temp*(temp+1))/2;
      cout<< sum_all - x<<"\n";

  } else {
      sum_all = (num2*(num2+1))/2;
      cout<< sum_all <<"\n";
  }

    even1 = (temp/2)*((temp/2)+1);
    even2 = (num2/2)*((num2/2)+1);

    sumeven = even2 - even1;
    odd1 = ((temp+1)/2)*((temp+1)/2);
    odd2 = ((num2+1)/2)*((num2+1)/2);

    sumodd = odd2 - odd1;

  cout<<sumeven<<"\n"<<sumodd<<"\n";

  return 0;
}