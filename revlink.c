#include <stdio.h>
#include<stdlib.h>
#define max (int)1e4
struct node{
     int data;
     struct node *next;
}*first;

void revdisplay(struct node *p){
    int rev[max]={0},i=0;
    printf("normal printing is: ");
    while(p!=NULL)
     {
         printf("%d ",p->data);
         rev[i]=p->data;
         p=p->next;
         i++;
     }
     printf("\n");
     printf("reverse printing is: ");
     for(int j=i-1;j>=0;j--){
         printf("%d ",rev[j]);
     }
     printf("\n");
}

int main(){
    struct node *p,*temp,*nn;
    int n,data,ch;
    int index,position,data1;
    printf("enter number of nodes needed: ");
    scanf("%d",&n);
    p=(struct node*)malloc(sizeof(struct node));
    printf("enter data for node 1: ");
    scanf("%d",&data);
    p->data=data;
    p->next=NULL;
    temp=p;
    for(int i=2;i<=n;i++){
        nn=(struct node*)malloc(sizeof(struct node));
        printf("enter data for node %d: ",i);
        scanf("%d",&data);
        nn->data=data;
        nn->next=NULL;
        
        temp->next=nn;
        temp=temp->next;
    }
    first=p;

    revdisplay(first);
    return 0;
}