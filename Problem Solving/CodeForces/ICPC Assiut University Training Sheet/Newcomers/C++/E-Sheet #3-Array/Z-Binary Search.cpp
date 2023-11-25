#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main() {
  int n,q;
  cin>>n>>q;

  int arr[n];
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
  }

  sort(arr,arr+n);

  while(q--)
  {
      int x,right=n-1,left=0,mid,flag=0;
      cin>>x;

      while(left<=right)
      {
          mid=(left+right)/2;
          if(arr[mid]==x)
          {
              cout<<"found"<<"\n";
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
          cout<<"not found"<<"\n";
      }
  }
  
    return 0;
}

