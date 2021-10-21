#include <stdio.h>
#include<string.h>
#define max 10
int queue[max],f1=-1,r1=-1,r2=max,f2=max;

void enqueuea(int x)
{
           if(f1==-1 && r1==-1){
               f1++;
               r1++;
               queue[r1]=x;
           }
           else if(r1<=4){
               r1++;
               queue[r1]=x;
           }
           else{
               printf("queue overflow\n");
           }
       }


void enqueueb(int x){
   
        if(f2==max && r2==max){
             f2--;
             r2--;
             queue[f2]=x;
        }
        else if(r2>=5){
              r2--;
              queue[r2]=x;
        }
        else{
            printf("queue overflow\n");
        }
    }


void dequeuea()
{
    if(f1==r1)
    {
        printf("\nunderflow\n");
    }
    else 
    {
        f1++;
    }
}

void dequeueb()
{
    if(f2==r2)
    {
        printf("\nunderflow\n");
    }
    else 
    {
        f2--;
    }
}

void display(){
    printf("elements of queue 1 are: ");
       for(int i=f1;i<=r1;i++){
           printf("%d ",queue[i]);
       } 
       printf("\n");
       printf("elements of queue 2 are: ");
       for(int i=f2;i>=r2;i--){
           printf("%d ",queue[i]);
       } 
       printf("\n");
}

int main(){
     int ch,num;
    do{
          printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~MENU~~~~~~~~~~~~~~~~~~~~~~~~\n");
          printf("1. insert in queue 1\n2. insert in queue 2\n3. delete in queue 1\n4. delete in queue 2\n5. display\n6. exit\n");
          scanf("%d",&ch);
          switch(ch){
              case 1:
              printf("enter the num to insert in queue 1: ");
              scanf("%d",&num);
              enqueuea(num);
              break;

              case 2:
              printf("enter the num to insert in queue 2: ");
              scanf("%d",&num);
              enqueueb(num);
              break;

              case 3:
              dequeuea();
              break;

              case 4: 
              dequeueb();
              break;

              case 5:
              display();
              break;
          }
    }while(ch!=6);
    
    return 0;
}