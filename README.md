# Assiut-University-Training-Newcomers

<a href="https://codeforces.com/group/MWSDmqGsZm/contests"><img src="Assiut sheet photo.png"></img> </a>


### [ 👆 Sheets link 👆](https://codeforces.com/group/MWSDmqGsZm/contests)

## Description
This repo is about my solution in sheet Assiut University Training-Newcomers on Codeforces website,<br> 
Where I solved the sheet in several multiple languages, and they are six languages:
* C++
*  C
* Java
* python
  
 <br>
 
* Soulution on c++:
  
```cpp
#include <iostream>
#include <algorithm>
using namespace std;

void mult (string a , string b ){
   string m;
   reverse (a.begin() , a.end());
   reverse (b.begin() , b.end());

   for(int i=0 ; i<a.size();i++){
       for(int j=0 ; j<b.size();j++){
           int pos = i+j;
           int x =(a[i]-'0')*(b[j]-'0');
           if(m.size()<= pos ){
               m+='0';
           }
           while(x!=0){
         if(m.size()<= pos ){
             m+='0';
         }
         int temp = x%10 + m[pos]-'0';
         m[pos]=temp%10 +'0';
         temp/=10;
         x/=10;
         x+=temp;
         pos++;
           }
       }
   }
   reverse (m.begin(),m.end());
   cout<<m;
  }

void add (string s , string s2){
  string  res;
  long long sum=0 , carry=0 ;
  reverse(s.begin() , s.end());

  for(int i=0 ; i<s.size() || i<s2.size() ; i++){
      if(i>=s.size()){
          sum=s2[i]-'0'+carry;
          res+=sum%10+'0';
          carry=sum/10;
      } else if (i>=s2.size()){
          sum=s[i]-'0'+carry;
          res+=sum%10+'0';
          carry=sum/10;
      }
      else{
          sum=s[i]-'0'+s2[i]-'0'+carry;
          res+=sum%10+'0';
          carry=sum/10;
      }
  }
  if (carry>0){
      res+=carry+'0';
  }
  reverse(res.begin() , res.end());
  cout<<res;
  }
  
int main(){
   string a , b="9999";
   cin>>a;
   add(a,b);
   cout<<"\n";
   mult(a,b);
   return 0;
}
```

<br>
 
* Soulution on c:
  
```c
#include<stdio.h>
#include<string.h>

int main(){
    char a[1000000],b[5]="9999";

    scanf("%s",a);

    int i,j,la,lb=4,l;
    la=strlen(a);

    l=la>lb?la:lb;

    for(i=0;i<la/2;i++){
        char t=a[i];
        a[i]=a[la-i-1];
        a[la-i-1]=t;
    }
    
    for(i=0;i<lb/2;i++) {
        char t=b[i];
        b[i]=b[lb-i-1];
        b[lb-i-1]=t;
    }

    
    int sum[l+1];
    l+=1;
    memset(sum,0,l*sizeof(int));

    for(i=0;i<l;i++)  {
        if(i<la)
            sum[i]+=(a[i]-'0');
        if(i<lb)
            sum[i]+=(b[i]-'0');
        sum[i+1]=sum[i]/10;
        sum[i]%=10;

    }
    i=l-1;
    while(sum[i]==0)
        i--;
    l=i;
    for(i=l;i>=0;i--) {
        printf("%d",sum[i]);
    }
    printf("\n");

   
    int mul[la+lb];
    l=la+lb;
    memset(mul,0,l*sizeof(int));

    for(i=0;i<la;i++) {
        for(j=0;j<lb;j++) {
            mul[i+j]+=((a[i]-'0')*(b[j]-'0'));
            mul[i+j+1]+=mul[i+j]/10;
            mul[i+j]=mul[i+j]%10;
        }
    }
    l-=1;
    while(mul[l]==0 && l>0)
        l--;
    for(;l>=0;l--)
        printf("%d",mul[l]);
    printf("\n");
}
```
 <br>
 
* Soulution on Java:
  
```Java
import java.math.BigInteger;
import java.util.Scanner;

public class O{
    public static void main(String[] args) {
    
     Scanner input = new Scanner(System.in);
     String num = input.nextLine();
     BigInteger bigInteger1 = new BigInteger(num);
     BigInteger bigInteger2 = new BigInteger("9999");
     System.out.println(bigInteger1.add(bigInteger2));
     System.out.println(bigInteger1.multiply(bigInteger2));
        
    }
}
```

 <br>
 
* Soulution on python:
  
```python
n = int(input())
print(n + 9999)
print(n * 9999)
```

#### I now the code will be easy in deffrant languges 😂 but in hard way you will learn how to think to solve this problemlike in c/c++ not like python The goal is to learn to solve problems not to solve them quickly and that was problem solving world.

## my codeforces handle 👇:
  <a href="https://codeforces.com/profile/Badawi010/">
   <img alt="Badawi010" src="https://userpic.codeforces.org/2881553/title/3a722feaacdf27b7.jpg"
         width="150" >
  <p>Badawi010</p>

<h3 align="left">Connect with me:</h3>

<p align="left">
<a href="ahmedbad063@gmail.com" target="blank"><img align="center" src="https://image.similarpng.com/very-thumbnail/2021/09/Gmail-icon-design-template-on-transparent-background-PNG.png" alt="ahmedbad" height="30" width="30" /></a>
<a href="https://www.linkedin.com/in/ahmed-badawi-hosny/" target="blank"><img align="center" src="https://raw.githubusercontent.com/rahuldkjain/github-profile-readme-generator/master/src/images/icons/Social/linked-in-alt.svg" alt="ahmed-badawi-hosny" height="30" width="40" /></a>
<a href="https://www.facebook.com/ahmed.badawyhosny" target="blank"><img align="center" src="https://raw.githubusercontent.com/rahuldkjain/github-profile-readme-generator/master/src/images/icons/Social/facebook.svg" alt="ahmed.badawyhosny" height="30" width="40" /></a>
</p>
