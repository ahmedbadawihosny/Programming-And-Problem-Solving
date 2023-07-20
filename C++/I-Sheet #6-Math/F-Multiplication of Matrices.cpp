#include <iostream>
#include <cmath>
#include <algorithm>
#define Code_acceleration ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
using namespace std;

const int MAX = 100;
int main() {
  Code_acceleration
  int a,b,x,y;
  cin>>a>>b;
  int arr1[MAX][MAX] ,arr2[MAX][MAX], res[MAX][MAX];
  for (int i=0;i<a;i++) {
      for(int j=0;j<b;j++) {
          cin>>arr1[i][j];
      }
  }
  cin>>x>>y;
  for (int i=0;i<x;i++) {
      for(int j=0;j<y;j++) {
          cin>>arr2[i][j];
      }
  }
  for (int i=0;i<a;i++) {
      for(int j=0;j<y;j++) {
        res[i][j] = 0;
          for (int k = 0; k < b; k++) {
              res[i][j] += (arr1[i][k] * arr2[k][j]);
          }
      }
  }
  for (int i = 0; i < a; i++) {
      for (int j = 0; j < y; j++) {
          cout << res[i][j] << " ";
      }
      cout << endl;
  }

  return 0;
}