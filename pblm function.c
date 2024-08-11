#include<stdio.h>
int zero() {return 0;}
int one() {return 1;}
int two() {return 2;}
int three() {return 3;}
int four() {return 4;}
int five() {return 5;}
int six(){ return 6;}
int seven() {return 7;}
int eight() {return 8;}
int nine() {return 9;}
int add(int a, int b) {return a+b;}
int sub(int a, int b) {return a-b;}
int mul(int a, int b) {return a*b;}
int div(int a, int b) {return a/b;}
int main(){
   int res = add(three(), four());
   printf("%d", res);
   res = sub(eight(), three());
   printf("%d", res);
   res = mul(seven(), five());
   printf("%d", res);
   res = div(nine(), three());
   printf("%d", res);

   return 0;
}
