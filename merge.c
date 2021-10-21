#include <stdio.h>
#include<stdlib.h>
struct array{
     int a[20];
     int length;
};
void merge(struct array *arr1,struct array *arr2){
      struct array *arr3=(struct array *)malloc(sizeof(struct array));
      arr3->length=0;
     int k=0;
   
        for(int i=0;i<arr1->length;i++){
            arr3->a[k]=arr1->a[i];
            k++;
            arr3->length++;
        }
        for(int i=0;i<arr2->length;i++){
            arr3->a[k]=arr2->a[i];
            k++;
            arr3->length++;
        }
    printf("elements of merged array are: ");
    for(int l=0;l<arr3->length;l++){
           printf("%d ",arr3->a[l]);
    }
    
}
int main(){
      struct array arr1;
      struct array arr2;
      
      printf("ENTER THE LENGTH OF ARR1: ");
      scanf("%d",&arr1.length);
      printf("ENTER THE ELEMENTS OF ARR1: ");
      for(int i=0;i<arr1.length;i++)
      scanf("%d",&arr1.a[i]);
      
      printf("ENTER THE LENGTH OF ARR2: ");
      scanf("%d",&arr2.length);
     printf("ENTER THE ELEMENTS OF ARR2: ");
      for(int i=0;i<arr2.length;i++)
      scanf("%d",&arr2.a[i]);

      merge(&arr1,&arr2);
     
return 0;
}