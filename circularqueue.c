#include <stdio.h>
#include<stdlib.h>
struct queue{
    int f;
    int r;
    int size;
    int *s;
};
void enqueue(struct queue *q,int x){
     if((q->r+1)%q->size==q->f)
     {
     printf("queue is full\n");
     }
     else if (q->f==-1 && q->r==-1){
         q->f=0;
         q->r=0;
         q->s[q->r]=x;
     }
     else{
         q->r=(q->r+1)%q->size;
         q->s[q->r]=x;
     }
}
int dequeue(struct queue *q){
    int x=-1;
    if(q->f==q->r)
    printf("queue is empty\n");
    else{
        q->f=(q->f+1)%q->size;
        x=q->s[q->f];
    }
    return x;
}
void display(struct queue q){
    int i=q.f;
    do{
        printf("%d ",q.s[i]);
        i=(i+1)%q.size;
    }while(i!=(q.r+1)%q.size);
    printf("\n");
}
int main(){
    int ch,num,size;
       struct queue q;
       q.f=q.r=-1;
       printf("enter size of queue: ");
       scanf("%d",&size);
       q.size=size;
       q.s=(int*)malloc(q.size*sizeof(int));
       do{
           printf("The operations available for queue are\n1. enqueue\n2. dequeue\n3. display\n4. exit\n");
           scanf("%d",&ch);
       switch(ch){
            case 1: 
            printf("enter number to put in queue: ");
            scanf("%d",&num);
            enqueue(&q,num);
            break;

            case 2: 
            printf("deleting......\n");
            dequeue(&q);
            break;

            case 3:
            printf("displaying.....\n");
            display(q);
            break;

        }
     }while(ch!=4);
    free(q.s);   
return 0;
}