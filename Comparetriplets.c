#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a[3],b[3];
    int a1=0;
    int b1=0;
    for(int i=0;i<3;i++)
 scanf("%d",&a[i]);

 for(int j=0;j<3;j++)
 scanf("%d",&b[j]);

  for(int i=0;i<3;i++)
 {

     if(a[i]>b[i])
     a1++;
     else if(a[i]<b[i])
     b1++;
     else {
     ;
     }


 }

 printf("%d %d",a1,b1);
 return 0;
}
