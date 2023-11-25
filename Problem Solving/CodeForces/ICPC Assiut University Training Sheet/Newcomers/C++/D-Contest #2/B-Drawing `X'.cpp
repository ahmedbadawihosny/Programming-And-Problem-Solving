#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;
    for (int i = 0;i < n;i++){
      for (int j = 0;j < n;j++){
        if (i == j && i != n/2 && j != n/2){
          cout<<"\\";
        } else if (i == n/2 && j == n/2){
          cout<<"X";
        } else if (j != n/2 && i == ((n-1)-j)){
          cout<<"/";
        } else {
          cout<<"*";
        }
      }
      cout<<endl;
    }
    
    return 0;
}