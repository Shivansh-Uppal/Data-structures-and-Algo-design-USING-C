#include <stdio.h>
#include<stdlib.h>
void diagnol(){
     int *A,n,ch,x,i,j;
     printf("enter dimension ");
     scanf("%d",&n);
     A=(int *)malloc(n*sizeof(int));
     do{
         printf("display menu\n");
         printf("1. create\n2. get\n3.set\n4. display\n5.exit\n");
         printf("choose the option ");
         scanf("%d",&ch);
         switch(ch){
             case 1: 
             for(i=1;i<=n;i++){
                 scanf("%d",&A[i-1]);
             }
             break;
             
             case 2: 
             
             printf("enter indices");
             scanf("%d %d",&i,&j);
             if(i==j){
                 printf("%d\n",A[i-1]);
             }
             else{
                 printf("0\n");
             }
             break;

             case 3: 
            
             printf("enter row,column and element: ");
             scanf("%d %d %d",&i,&j,&x);
             if(i==j){
                 A[i-1]=x;
             }
             break;

             case 4:
             for(i=1;i<=n;i++){
                 for(j=1;j<=n;j++){
                     if(i==j)
                     printf("%d",A[i-1]);
                     else{
                         printf("0");
                     }
                 }
                 printf("\n");
             }
             break;
         }
     }
     while(ch!=5);
}

void uppermat(){
     int *A,n,ch,x,i,j,k;
     printf("enter dimension ");
     scanf("%d",&n);
     k=n;

     A=(int *)malloc((n*(n+1)/2)*sizeof(int));
     do{
         printf("display menu\n");
         printf("1. create\n2. get\n3. display\n4.exit\n");
         printf("choose the option ");
         scanf("%d",&ch);
         switch(ch){
             case 1: 
             
              for(i=1;i<=n*(n+1)/2;i++){
                 scanf("%d",&A[i-1]);
             }
        
        
             break;

             case 2: 
                printf("enter indices: ");
                scanf("%d %d",&i,&j);
                 if(i>j){
                    printf("0\n");
                }
                else if(i<=j){
                    i=(k*(i-1)-(i-2)*(i-1)/2)+(j-i);
                    printf("%d\n",A[i]);
                }
                break;
             
             case 3:
                 for(i=1;i<=n;i++){
                 for(j=1;j<=n;j++){
                     if(i>=j)
                     printf("%d",A[(k*(i-1)-(i-2)*(i-1)/2)+(j-i)]);
                     else{
                         printf("0");
                     }
                 }
                 printf("\n");
                 }
             break;
            }
        }
        while(ch!=4);
    }
int main(){
    diagnol();
    uppermat();
    return 0;
}