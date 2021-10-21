#include <stdio.h>
#include<stdlib.h>
#define max (int)1e4
struct node{
     int data;
     struct node *next;
}*top=NULL;

void push(int x){
     struct node *t;
     t=(struct node*)malloc(sizeof(struct node));
    if(t==NULL)
    printf("stack overflow");
    else{
    t->data=x;
    t->next=top;
    top=t;
    }
}

int pop(){
    struct node *t;
    int x=-1;
    if(top==NULL){
        printf("stack is empty");
    }

    else{
        t=top;
        top=top->next;
        free(t);
    }
    return x;
}

void display(){
    struct node *p;
    p=top;
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}
int main(){
      int ch,num,j=0,rev[max]={0};
      do{
             printf("\n~~~~~~~~~~~~~~~~~~MENU~~~~~~~~~~~~~~~~~~~~~~\n");
             printf("1.push\n2.pop\n3.display\n4.reverse\n5.exit\n");
             scanf("%d",&ch);
             switch(ch){
                 case 1:
                 printf("\nenter the number you want to insert: ");
                 scanf("%d",&num);
                 push(num);
                 break;

                 case 2:
                 rev[j]=pop();
                 j++;
                 break;

                 case 3: 
                 display();
                 break;

                 case 4:
                 for(int i=0;i<j;i++){
                     
                     printf("%d ",rev[i]);
                 }
                 printf("\n");
                 break;
             }
      }while(ch!=5);   
return 0;
}