#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
     int n;
     scanf("%d",&n);
     int a[n+1];
     for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
     }
     
     for(int i=n;i>0;i--){
        if(i%2!=0)
        printf("%d ",a[i]);
     }
    printf("\n");
    return 0;
}
