#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int  ar[100];
    int pos=0;
    int neg=0;
    int zero=0;
        int n;
        float a;
    scanf("%d",&n);
    for(int i = 0; i<n; i++)  
    {  
        scanf("%d",&ar[i]);  
    }  
    for(int i=0; i<n; i++)
    { 
    if(ar[i]>0)
      pos++;
    else if(ar[i]<0)
      neg++;
    else if(ar[i]==0)
      zero++;
    }
    a=(float)pos/n;
    printf("%f\n",a);
    a=(float)neg/n;
    printf("%f\n",a);
    a=(float)zero/n;
    printf("%f\n",a);
return 0;
}
 
