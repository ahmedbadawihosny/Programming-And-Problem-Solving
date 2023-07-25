//  Wrong solution

#include <stdio.h>

void sort(long long *arr, long long n){
  for(long long i = 0; i < n-1; i++){
      for(long long j = i+1; j < n; j++){
          if(arr[i] > arr[j]){
              long long t = arr[i];
              arr[i] = arr[j];
              arr[j] = t;
          }
      }
  }
}

int main() {
  long long n,q;
  scanf("%lld%lld",&n,&q);

  long long arr[n];
  for(long long i=0;i<n;i++)
  {
      scanf("%lld",&arr[i]);
  }

  sort(arr,n);

  while(q--){
      long long x,right=n-1,left=0,mid,flag=0;
      scanf("%lld",&x);

      while(left<=right){
          mid=(left+right)/2;
          if(arr[mid]==x)
          {
              printf("found\n");
              flag=1;
              break;
          }
        if(arr[mid]>x)
          {
              right = mid-1;
          }
          else
          {
              left=mid+1;
          }
      }
      if(flag==0)
      {
          printf("not found\n");
      }
  }

  return 0;
}