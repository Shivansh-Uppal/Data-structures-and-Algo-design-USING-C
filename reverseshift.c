#include <stdio.h>
struct array{
    int a[20];
    int size;
    int length;
};
void reverse(struct array *arr){
    int i,j;
    
      for(i=0,j=arr->length-1;i<j;i++,j--){
          int temp;
          temp=arr->a[i];
          arr->a[i]=arr->a[j];
          arr->a[j]=temp;
      }
      for(int k=0;k<arr->length;k++){
          printf("%d ",arr->a[k]);
      }
}
void leftshift(struct array *arr){
      for(int i=0;i<arr->length;i++){
          arr->a[i]=arr->a[i+1];
      }
      for(int i=0;i<arr->length;i++){
          printf("\nelement[%d]: %d",i,arr->a[i]);
      }
}
void rightshift(struct array *arr){
    int temp;
temp=arr->a[arr->length-1];
      for(int i=arr->length-1;i>0;i--){
          arr->a[i]=arr->a[i-1];
          
      }
       arr->a[0]=temp;
      for(int i=0;i<arr->length;i++){
          printf("\n %d ",arr->a[i]);
      }
}

int main(){
struct array arr={{2,3,4,5,6},10,5};
reverse(&arr);
leftshift(&arr);
rightshift(&arr);
return 0;
}