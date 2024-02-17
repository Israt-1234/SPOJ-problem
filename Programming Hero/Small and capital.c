#include<stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
 char s[1000];
  scanf("%s",s);
  int count=0;
  int count1=0;
  for(int i=0;i<strlen(s);i++){
    if(s[i]>='a' && s[i]<='z')
    count++;
     if(s[i]>='A' && s[i]<='Z')
    count1++;
  }
  printf("%d %d",count1, count);
  return 0;
}