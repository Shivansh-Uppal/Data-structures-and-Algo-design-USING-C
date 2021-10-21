#include <stdio.h>
#include<stdlib.h>
struct node {
    int data;          // Data 
    struct node *next; // Address 
}*first;
void del(struct node *p);
int main(){
     struct node *temp,*head,*newNode;
     int data, i;
     int n;

    printf("Enter the total number of nodes: ");
    scanf("%d", &n);

    head = (struct node *)malloc(sizeof(struct node));

    
    printf("Enter the data of node 1: ");
    scanf("%d", &data);

    head->data = data; 
    head->next = NULL; 

    temp = head;
    for(i=2; i<=n; i++)
    {
        newNode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data of node %d: ", i);
        scanf("%d", &data);

        newNode->data = data; 
        newNode->next = NULL;  

        temp->next = newNode; 
        temp = temp->next;    
    }
     first=head;
      while(head!=0){
        printf("%d -> ",head->data);
        head=head->next;
    } 
  printf("\n");
 del(first);   
 
      
return 0;
}
void del(struct node *p){
    struct node *q;
     q=p;
    while(p!=NULL){
        q=p->next;
       printf(" %d ->",q->data);
       p=p->next;
    }
}