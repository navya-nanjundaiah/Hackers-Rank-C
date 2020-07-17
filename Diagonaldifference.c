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
 int a[100][100];
 int n;
 int sum1=0;
 int sum2=0;
 int i,j;
 int diff=0;
    scanf ("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<n;i++)
      {  sum1+=+a[i][i];        
         sum2+=a[i][n-1-i];
      }
    diff=abs(sum1-sum2);
    printf("%d",diff);
          
  
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    return 0;
}