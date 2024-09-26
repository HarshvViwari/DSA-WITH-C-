// PROGRAM TO CREATE AND TRAVERSE (PRINTING THE ARRAY ELEMENTS) 
#include <stdio.h>

int main() {
   int size;
   printf("ENTRE SIZE OF ARRAY \n");
   scanf("%d",&size);
   int array[size];
   for (int i=0; i<size; i++){
       printf("Entre %d element of array\n",i+1);
       scanf("%d",&array[i]);
   }
   
   for (int j=0; j <size; j++){
       printf("\nTHE %d ELEMENT OF ARRAY IS  \n",j+1);
       printf("%d",array[j]);
   }
    return 0;
}
