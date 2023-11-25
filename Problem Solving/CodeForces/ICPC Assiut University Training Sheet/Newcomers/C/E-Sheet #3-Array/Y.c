#include <stdio.h>

int main() {
  long long n,q;
  scanf("%lld%lld",&n,&q);
  long long arr1[n];
  long long arr2[n];
  for (int i=0;i < n;i++){
  scanf("%lld",&arr1[i]);
  if (i == 0){
    arr2[i] = arr1[i];
  } else {
      arr2[i] = arr1[i] + arr2[i-1];
  }
  }
  while (q--){
  long long start,end,sum;
  scanf("%lld%lld",&start,&end);
  start--;
  end--;
  sum = arr2[end] - arr2[start] + arr1[start];
  printf("%lld\n",sum);
  }
  return 0;
}