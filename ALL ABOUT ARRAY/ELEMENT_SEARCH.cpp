
#include <stdio.h>

int main() {
    int size;
    int item;
    int found=0;
    printf("entre size of array  ");
    scanf("%d",&size);
    int array[size];
    for (int i=0; i<size; i++){
        printf("entre %d element ",i+1);
        scanf("%d",&array[i]);
        
    }
    
    printf("ENTRE ELEMENT YOU WANT TO SEARCH IN ARRAY  ");
    scanf("%d",&item);
    for (int i=0; i<size; i++){
        if(item==array[i]){
            printf("element found");
            printf("at index %d",i);
            found =1;
            break;
        }
        
    }  
    if(found==0)
    printf("element not found");
    
    return 0;
}