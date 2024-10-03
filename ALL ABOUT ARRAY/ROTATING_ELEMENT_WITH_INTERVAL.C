#include <stdio.h>

int main() {
    int size;
    int rotate;
    int temp;
    printf("entre size of element ");
    scanf("%d",&size);
    int array[size];
    for ( int i=0; i< size; i++){
        printf("entre %d element of array ",i+1);
        scanf("%d",&array[i]);  
    }
    printf("entre the interval to rotate ");
    scanf("%d",&rotate);
    for(int i=0; i<rotate; i++){
        temp = array[0];
        for (int j=0; j<size; j++){
            
            array[j]= array[j+1];
        }
        array[size-1] = temp;
    }
    printf("the sequence of element after rotation");
    for ( int i=0; i< size; i++){
        printf("  %d  ",array[i]);
        
    }
    
    
    
    
    return 0;
}