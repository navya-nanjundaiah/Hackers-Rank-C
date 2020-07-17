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
     int n;
     long bigint = 0; 
     scanf("%d",&n);
     long arr[n];
     for(int arr_i = 0; arr_i < n; arr_i++)
     {
          scanf("%li",&arr[arr_i]);
     } 
     for(int arr_i = 0; arr_i < n; arr_i++)
     { 
         bigint = bigint + (arr[arr_i]) ;
     } 
     printf("%ld\n", bigint); 
     return 0;
 }
