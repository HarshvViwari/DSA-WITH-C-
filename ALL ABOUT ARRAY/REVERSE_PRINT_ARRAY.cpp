
#include <stdio.h>
void reversearray(int array[], int size){
    printf("REVERSE");
    for (int i=1; i <=size; i++){
        printf(" \n %d ",array[size-i]);
    }
    printf("COMPLETED");
}
void takeinput (int array[],int size){
    for(int i=0; i<size; i++){
    printf("entre %d elements ", i+1);
    scanf("%d",&array[i]);
    }
}

int main() {
    int size;
    printf("entre size of array ");
    scanf("%d",&size);
    
    int array[size];
    takeinput(array,size);
    reversearray(array,size);
    return 0;
}