#include <stdio.h>
#include<stdlib.h>
struct array{
    int a[20];
    int size;
    int length;
};
    void display(struct array arr)
    {
     int i=0;
     printf("elements are\n");
     for(i=0;i<arr.length;i++){
     printf("%d ",arr.a[i]);
     }
     printf("\n");
     return;
}
    void insert(struct array *arr,int x,int index){
    //int j;
    //j=arr->a[index];
        for(int i=arr->length-1;i>=index;i--){
            arr->a[i+1]=arr->a[i];
        }
    arr->a[index]=x;
    arr->length++;
    
}
     void delete(struct array *arr,int index){
         int x=0;
         if(index>=0 && index<arr->length)
         x=arr->a[x];
         for(int i=index;i<arr->length-1;i++){
               arr->a[i]=arr->a[i+1];
               
         }
         arr->length--;
     }
int main(){
    int ch;
    int n;
    int index;
     struct array arr;
     printf("enter the size of array: ");
     scanf("%d",&arr.size);
     printf("enter the length of array: ");
     scanf("%d",&arr.length);
     printf("enter the elements of array:\n");
     for(int i=0;i<arr.length;i++){
         scanf("%d",&arr.a[i]);
     }
    
     do{
          printf("enter choice \n1 for insertion \n2 for deletion\n3 for traversal\n4 for exit\n");
         scanf("%d",&ch);
     switch(ch){
         case 1: printf("enter the element you want to insert ");
                 scanf("%d",&n);
                 printf("enter the index where you want to insert element ");
                 scanf("%d",&index);
                 insert(&arr,n,index);
                 display(arr);
                  break;
         case 2: 
                 printf("enter the index where you want to delete element ");
                 scanf("%d",&index);
                 delete(&arr,index);
                 display(arr);
                  break;
         case 3: display(arr);
         break;
     }
     }while(ch!=4);
     
     
return 0;
}