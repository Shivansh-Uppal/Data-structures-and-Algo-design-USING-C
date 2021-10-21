#include <stdio.h>
#include<stdlib.h>
struct node{
     int data;
     struct node *next;
}*first,*last;
void sum(struct node *p){
      int sum=0;
      while(p!=NULL){
          sum=p->data+sum;
          p=p->next;
      }
      printf("sum is: %d\n",sum);
}
void display(struct node *p){
    printf("elements are: ");
     while(p!=NULL){
         printf("%d ->",p->data);
         last=p;
         p=p->next;
     }
     printf("\n");
}
int count(struct node *p){
    int l=0;
    while(p){
        l++;
        p=p->next;
    }
    return l;
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
void insertlast(int x){
      struct node *t;
      t->data=x;
      t->next=NULL;

      if(first==NULL){
          first=last=t;
      }
      else{
          last->next=t;
          last=t;
      }
}
void sortedInsert(struct node *p,int x){
    struct node *t,*q=NULL;

    t=(struct node *)malloc(sizeof(struct node));
    t->data=x;
    t->next=NULL;

    if(first==NULL){
        first=t;
    }
    
    else{
        while(p && p->data<x){
            q=p;
            p=p->next;
        }
        if(p==first){
            t->next=first;
            first=t;
        }

        else{
            t->next=q->next;
            q->next=t;
        }
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
            printf("1.display\n2.sum\n3.insert\n4.insert at last\n5.delete\n6.exit\n");
            printf("Enter the choice: ");
            scanf("%d",&ch);
            switch(ch){
                case 1: 
                display(first);
                break;

                case 2:
                sum(first);
                break;

                case 3:
                printf("enter the index to insert at: ");
                scanf("%d",&index);
                printf("enter data to insert: ");
                scanf("%d",&data1);
                insert(first,index,data1);
                break;

                case 4:
                display(first);
                printf("enter data to insert at last: ");
                scanf("%d",&data1);
                insertlast(data1);
                break;

                case 5:
                printf("enter the index to delete at: ");
                scanf("%d",&index);
                delete(index);
                break;
            }

    }while(ch!=6);
        
        
return 0;
}