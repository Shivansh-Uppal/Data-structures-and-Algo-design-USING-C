#include <stdio.h>
struct array{
    int a[20];
    int size;
    int length;
};
int binarySearch(struct array *arr,int key){
      
      int s=0;        // s is start
      int e=arr->length;        // e is end
           while(s<=e){
               int mid=(s+e)/2;

               if(arr->a[mid]==key){
                  
                   return key;
               }
               else if(arr->a[mid]>key){
                e=mid-1;
               }
               else{
                 s=mid+1;
               }
           }
           
           return -1;
      }

int main(){
 struct array arr;
 printf("enter the array size: ");
 scanf("%d",&arr.size);
 printf("enter the array length: ");
 scanf("%d",&arr.length);
 printf("enter the array elements: ");
 for(int i=0;i<arr.length;i++){
     scanf("%d",&arr.a[i]);
 }
int n;
printf("enter the element to be searched: ");
scanf("%d",&n);
 if(binarySearch(&arr,n)!=-1)
  printf("%d found",n);
  else{
      printf("not found element %d",n);
  }

return 0;
}