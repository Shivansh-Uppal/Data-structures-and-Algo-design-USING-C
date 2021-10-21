#include <stdio.h>
#include<stdlib.h>
struct node{
     int data;
     struct node *next;
}*first; 
void create(int a[],int n){
    struct node *temp,*last;
    first=(struct node*)malloc(sizeof(struct node));
    first->data=a[0];
    first->next=NULL;
    last=first;

    for(int i=1;i<n;i++){
        temp=(struct node*)malloc(sizeof(struct node));
        temp->data=a[i];   
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }
}
void display(struct node *p){
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
}
int main(){
     int a[]={3,5,7,10,15};

     create(a,5);
     display(first);
return 0;
}