#include <stdio.h>

int main(){
  int n, m;
  scanf("%d%d", &n, &m);
  int arr[100000] = {};
  for (int i = 0; i < n; i++){
    int x;
    scanf("%d", &x);
    if (x <= m){
        arr[x-1]++;
    }
}
  for (int i = 0; i < m; i++){
    printf("%d \n", arr[i]);
  }
}