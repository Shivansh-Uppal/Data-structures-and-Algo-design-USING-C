#include <stdio.h>
struct array{
    int a[20];
    int length;
};
void  linearSearch(struct array *arr,int x){
      int count=0,i=0;
      while(arr->length>=0){
          if(arr->a[i]==x){
             printf("found element %d at position %d\n",arr->a[i],i);
             count++;
          }
        i++;
        arr->length--;
      } 
       if(count==0){
              printf("element %d is not found\n",x);
          }   
      } 
      void searching(int array[],int index,int search){
          int count=0;
          for(int i=0;i<index;i++){
              if(array[i]==search){
                  printf("element %d is found at position %d",search,i);
                  count++;
              }
          }
          if(count==0){
              printf("element %d is not found",search);
          }
      }
int main(){
    int n,array[10];
    printf("write 1 for structure way or 2 for normal search: ");
    scanf("%d",&n);
   struct array arr;
    printf("enter the array length: ");
    scanf("%d",&arr.length);
    printf("enter the array elements: ");
    

   switch(n){
       case 1:
       for(int i=0;i<arr.length;i++){
        scanf("%d",&arr.a[i]); 
    }
       linearSearch(&arr,1);
       break;
       case 2: 
       for(int i=0;i<arr.length;i++){
        scanf("%d",&array[i]); 
    }
       searching(array,5,1);
       break;
   } 
return 0;
}