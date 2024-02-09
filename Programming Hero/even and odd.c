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
     int sum=0,sum1=0;
     for(int i=n;i>0;i--){
        if(a[i]%2!=0){
            sum+=a[i];
        }
        else{
            sum1+=a[i];
        }
     }
     printf("%d %d",sum1,sum);
    printf("\n");
    return 0;
}
