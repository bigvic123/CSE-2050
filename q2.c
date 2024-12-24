#include <stdio.h>
#include <stdlib.h>

double values[] = { 88.0, 56.0, 100.0, 2.0, 25.0 };

double cmpfunc (const void * a, const void * b) {
   return ( *(double*)a - *(double*)b );
}

double main () {
   int n;

   printf("Before sorting the list is: \n");
   for( n = 0 ; n < 5; n++ ) {
      printf("%d ", values[n]);
   }

   qsort(values, 5, sizeof(int), cmpfunc);

   printf("\nAfter sorting the list is: \n");
   for( n = 0 ; n < 5; n++ ) {   
      printf("%d ", values[n]);
   }
  
   return(0);
}