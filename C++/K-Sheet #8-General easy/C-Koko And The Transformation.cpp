#include <iostream>
#define Code_acceleration ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
using namespace std;

int main(){
  Code_acceleration
  int n,m,num,sum1=0,sum2=0;
  cin>>n>>m;
  for (int i=0;i<n;i++){
      cin>>num;
      sum1+=num;
  }
    for (int i=0;i<m;i++){
      cin>>num;
      sum2+=num;
  }
  if (sum1==sum2){
      cout<<"Yes";
  } else {
      cout<<"No";
  }
    return 0;
}