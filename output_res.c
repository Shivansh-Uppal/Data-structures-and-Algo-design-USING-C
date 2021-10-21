#include <stdio.h>
#include<stdlib.h>
struct dequeue{
      int f;   
      int r;   
      int size;  
      int *s; 
      int c;  
};                 

void insert_front(struct dequeue *o,int num){
    if(o->r-o->f==1){
        int n;
          printf("want to remove instance of this queue\nPRESS 1 for YES\nPRESS 2 for NO\n ");
          scanf("%d",&n);
          if(n==1){
              free(o->s);
              o->f=o->c=-1;
              o->r=o->size;
              printf("to add element %d please enter again",num);
          }
          else
        printf("QUEUE OVERFLOW");
    }
       
    
    else{
        o->f=o->f+1;
        o->s[o->f]=num;
    }

}

void insert_rear(struct dequeue *o,int num){
     if(o->r-o->f==1){
         int n;
          printf("want to remove instance of this queue\nPRESS 1 for YES\nPRESS 2 for NO\n ");
          scanf("%d",&n);
          if(n==1){
              free(o->s);
              o->f=o->c=-1;
              o->r=o->size;
              printf("to add element %d please enter again",num);
          }
          else
        printf("QUEUE OVERFLOW");
    }
    else{
        o->r=o->r-1;
        o->s[o->r]=num;
    }

}


void delete_front(struct dequeue *o){
         if(o->c<o->size)
         o->c++;
         else
       printf("QUEUE underflow");
            
}

void display(struct dequeue o){
   printf("elements of queues are: ");
   if(o.c!=-1){    // if any element is deleted
   
   for(int i=o.c+1;i<=o.f;i++){
       printf("%d ",o.s[i]);
   }

   if(o.c<o.r){
   
   for(int i=o.r;i<=o.size-1;i++){
        printf("%d ",o.s[i]);
    }

   }

   else if(o.c>=o.r){
       for(int i=o.c;i<=o.size-1;i++){
        printf("%d ",o.s[i]);
    }

   }

   }
   else{
   
   for(int i=0;i<=o.f;i++){
       printf("%d ",o.s[i]);
   }

    for(int i=o.r;i<=o.size-1;i++){
        printf("%d ",o.s[i]);
    }
       
   }
    printf("\n");
}
int main(){
      struct dequeue o;
      int num,ch,n;
      printf("enter the number of elements needed: ");
      scanf("%d",&num);                        
      o.f=o.c=-1;
      o.r=num;
      o.size=num;
      o.s=(int*)malloc(o.size*sizeof(int));
      
      do{
          printf("\n*********************MENU*************************\n");
          printf("1.insert from front\n2.insert from rear\n3.delete from front\n4.display\n5.exit\n");
          printf("enter the choice: ");
          scanf("%d",&ch);
          switch(ch){
              case 1:
              printf("enter number to insert from front: ");
              scanf("%d",&n);
              insert_front(&o,n);
              break;

              case 2: 
              printf("enter number to insert from rear: ");
              scanf("%d",&n);
              insert_rear(&o,n);
              break;

              case 3:
              delete_front(&o);
              break;

              case 4:
              display(o);
              break;
          }
      }while(ch!=5);
return 0;
}