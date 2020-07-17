#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 int main(){
    unsigned long long int a[5],lar,sma,sum=0;
    int i;
    scanf("%lld",&a[0]);
    lar=a[0];
    sma=a[0];
    sum=+ a[0];
    for(i=1;i<5;i++){
        scanf("%lld",&a[i]);
        sum=sum+a[i];
        if(lar<a[i])
            lar=a[i];
        if(sma>a[i])
            sma=a[i];

    }
    printf("%lld %lld",sum-lar,sum-sma);
    return 0;
}
