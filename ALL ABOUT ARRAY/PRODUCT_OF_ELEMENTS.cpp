#include <stdio.h>

int main() {
    int size,product=1;
    printf("Entre size of array ");
    scanf ("%d",&size);
    
    int array[size];
    for(int i =0; i<size; i++){
        printf("entre %d element  ",i+1);
        scanf ("%d",&array[i]);
    }
    printf("Product of all the elements of array is :  ");
    for(int j=0; j<size; j++){
        product=product*array[j];
    }
    printf("%d  \n",product);
    printf("COMPLETED");
    return 0;
}