#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
  string s;
  int cost[26];
  cin >> s;
  for (int i = 0; i < 26; i++) {
      cin >> cost[i];
  }
  int size = s.size();
  int counter=0;
  for (int i = 0; i < size; i++) {
      counter=0;
      if (s[i]== '?'){
      for (int z=i;z<size;z++) {
          if (s[z]=='?'){
              counter++;
          } else {
              break;
          }
      }
      if (counter==size){
          cout<<"0"<<endl;
          for (int z=0;z<size;z++){
              cout<<"a";
          }
          return 0;
      } else {
          if (i==0){
              int max =INT_MAX,index;
              for (int z=0;z<s[counter]-97+1;z++){
                  int mycost=abs(cost[s[counter]-97]-cost[z]);
                  if (mycost<max){
                      max = mycost;
                      index = z;
                  }
              }
              char c=index+97;
              for(int z=0;z<counter;z++){
                  s[z]= c;
              } 
              i+=counter;
          } else if(i+counter==size){
                int max =INT_MAX,index;
              for (int z=0;z<s[i-1]-97+1;z++){
                  int mycost=abs(cost[s[i-1]-97]-cost[z]);
                  if (mycost<max){
                      max = mycost;
                      index = z;
                  }
              }
              char c=index+97;
              for(int z=i;z<counter+i;z++){
                  s[z]= c;
              } 
              break;
          } else {
              int max =INT_MAX,index;
              for(int z=0;z<26;z++){
                  int mycost = abs(cost[s[i-1]-97]-cost[z])+abs(cost[z]-cost[s[i+counter]-97]);
                    if (mycost<max){
                      max = mycost;
                      index = z;
                  }
              }
              char c=index+97;
              for(int z=i;z<i+counter;z++){
                  s[z]= c;
              } 
              i+=counter;
          }
        }
      }
  } 
  long long finalcost=0;
  for(int i=0;i<size-1;i++){
      finalcost+=abs(cost[s[i]-97]-cost[s[i+1]-97]);
  }
  cout<<finalcost<<"\n"<<s<<endl;
  
  return 0;
}