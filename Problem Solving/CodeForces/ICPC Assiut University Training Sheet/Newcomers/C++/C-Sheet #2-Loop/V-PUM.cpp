#include <iostream>
using namespace std;

int main (){
  int num;
  cin>>num;
  int counter = 1;
  for (int i = 1;i <= num;i++){
      if (counter % 4 == 0){
        counter++;
        cout<<"PUM"<<"\n";
        i--;
        continue;
      }
      cout<<counter<<" ";
      counter++;
      cout<<counter<<" ";
      counter++;
      cout<<counter<<" ";
      counter++;
    }
      cout<<"PUM"<<"\n";

  return 0;
}
