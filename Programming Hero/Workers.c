#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
    int n,d,m;
    scanf("%d %d %d",&n,&d,&m);
    int k=n/d;
    int l=m*k;
    printf("%d",l);
    return 0;
}
/*
#include<stdio.h>

int main() {
    int M1, M2, D;
    scanf("%d %d %d", &M1, &M2, &D);
    
    int days = (M1 * D) / M2;
    
    printf("%d", days);
    
    return 0;
}


*/