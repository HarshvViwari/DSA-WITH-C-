// PROGRAM TO MAKE A DYNAMIC ARRAY 
#include <stdio.h>

int main() {
   int size;
  
   printf("ENTRE SIZE OF ARRAY \n");
   scanf("%d",&size);
  
   int array[size];
  
   for (int i=0; i<size; i++)
   {
       printf("Entre %d element of array\n",i+1);
       scanf("%d",&array[i]);
   }
    return 0;
}
