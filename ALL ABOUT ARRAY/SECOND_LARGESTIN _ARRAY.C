#include <stdio.h>

int main() {
    int size;
    printf("entre size of array ");
    scanf("%d",&size);
    
    int array[size];
    
    for (int i =0; i<size; i++){
        printf("entre %d element ",i+1);
        scanf("%d",&array[i]);
    }
    printf("the second largest element in array is  ");
    
    int templ=array[0];
    int temps=0;
    for (int i=1; i<size; i++){
    if (templ<array[i]){
        temps = templ;
        templ = array[i];
        
        }
    
    }
    printf("%d",temps);
    printf("the largest element is   ");
    printf("%d",templ);
    
    
    return 0;
}