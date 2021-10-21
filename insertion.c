#include <stdio.h>
struct array{
    int arr[100];
    int size;
    int length;
};
void insert(struct array *arr,int x,int index){
    int j;
    j=arr->arr[index];
        for(int i=arr->length-1;i>=index;i--){
            arr->arr[i+1]=arr->arr[i];
        }
    arr->arr[index]=x;
    arr->length++;
    for(int i=0;i<arr->length;i++){
        printf("%d ",arr->arr[i]);
    }
}
int main(){
      struct array arr;
      int x,index;
     printf("enter the integer to insert: "); 
      scanf("%d",&x);
       printf("enter the array length: ");
      scanf("%d",&arr.length);
       printf("enter the array size: ");
      scanf("%d",&arr.size);
      printf("enter the index: ");
      scanf("%d",&index);
       printf("enter the array: ");
      for(int i=0;i<arr.length;i++){
          scanf("%d",&arr.arr[i]);
      }
      insert(&arr,x,index);
return 0;
}