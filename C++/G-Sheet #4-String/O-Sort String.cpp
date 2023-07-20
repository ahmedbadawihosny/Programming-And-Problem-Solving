#include <iostream>
#include <string>
using namespace std;

int main() {
  int arr[123]={};
  int n;
  cin>>n;
  for (int i = 0;i < n;i++){
      char s;
      cin>>s;
      arr[s]++;
  }
  for (int i = 0;i < 123;i++){
  if (arr[i] != 0)
    while (arr[i]--)
      cout<<(char)(i); 
  }

  return 0;
}
