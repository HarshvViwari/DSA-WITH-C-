#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};
int main() {
    int n;
    struct node *ptr=NULL,*start=NULL,*newnode=NULL;
    printf("entre no. of node of linked list ");
    scanf("%d",&n);
    
    for(int i=0; i<n; i++){
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter the data for the node: ");
        scanf("%d", &newnode->data); 
        newnode->next = NULL; 
    
        if(start==NULL){
           start=newnode;
        } else{
        ptr->next=newnode;
           
        }
        ptr=newnode;
    }
    return 0;
}