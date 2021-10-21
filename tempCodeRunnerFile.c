#include <stdio.h>
#include<stdlib.h>
struct node{
     int data;
     struct node *next;
}*first,*last;

void display(struct node *p){
    printf("elements are: ");
     while(p!=NULL){
         printf("%d ->",p->data);
         last=p;
         p=p->next;
     }
     printf("\n");
}

void insert(struct node *p,int index,int x){
    struct node *t;
    if(index<0 || index>count(p)){
         return;
    }
    t=(struct node*)malloc(sizeof(struct node));
    t->data=x;
    if(index==0){
        t->next=first;
        first=t;
    }
    else{
        for(int i=0;i<index-1;i++){
            p=p->next;
        }
            t->next=p->next;
            p->next=t;
        
    }
}


void delete(int pos){
      struct node *p,*q;
      if(pos==1){
          p=first;
          first=first->next;
          free(p);
      }
      else{
          p=first;
          q=NULL;
          for(int i=0;i<pos-1 && p;i++){
              q=p;
              p=p->next;
          }
          if(p){
              q->next=p->next;
              free(p);
          }
      }

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
    do{
            printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~MENU~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            printf("1.display\n2.insert\n3.delete\n4.exit\n");
            printf("Enter the choice: ");
            scanf("%d",&ch);
            switch(ch){
                case 1: 
                display(first);
                break;

                

                case 2:
                printf("enter the index to insert at: ");
                scanf("%d",&index);
                printf("enter data to insert: ");
                scanf("%d",&data1);
                insert(first,index,data1);
                break;

                

                case 3:
                printf("enter the index to delete at: ");
                scanf("%d",&index);
                delete(index);
                break;
            }

    }while(ch!=4);
        
        
return 0;
}