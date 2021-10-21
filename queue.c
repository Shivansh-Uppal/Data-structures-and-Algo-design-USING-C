#include <stdio.h>
#include<stdlib.h>
int top,rear,*s,size;
int isfull();
int isempty();
void enqueue(int x){
    if(isfull()==1){
          printf("queue overflow\n");
    }
    else{
        rear++;
        s[rear]=x;
    }
}
int isfull(){
    if(rear==size-1){
        return 1;
    }
    else{
        return 0;
    }
}
int dequeue(){
    int x=-1;
        if(isempty()==1){
           printf("queue underflow\n");
        }
        else{
            top++;
            x=s[top];
        }
        return x;
}
int isempty(){
    if(top==rear){
        return 1;
    }
    else{
        return 0;
    }
}
void display(){
    for(int i=top+1;i<=rear;i++){
       int x;
       x=s[i];
       printf("%d ",x);
    }
    printf("\n");
}
int main(){
    int ch,num;
     top=rear=-1;
    
     printf("enter size of queue: ");
     scanf("%d",&size);
      
     s=(int*)malloc(size*sizeof(int));
     do{
        printf("The operations available for queue are\n1. enqueue\n2. dequeue\n3. display\n4. exit\n");
        scanf("%d",&ch);
        switch(ch){
            case 1: 
            printf("enter number to put in queue: ");
            scanf("%d",&num);
            enqueue(num);
            break;

            case 2: 
            printf("deleting......\n");
            dequeue();
            break;

            case 3:
            printf("displaying.....\n");
            display();
        }
     }while(ch!=4);
     
     free(s);
return 0;
}