#include <stdio.h>
#include <stdlib.h>
struct array{
    int a[20];
    int size;
    int length;
};
void sunion(struct array *arr1,struct array *arr2){
    
      struct array *arr3=(struct array *)malloc(sizeof(struct array));
      int i=0,j=0,k=0;
    while(i<arr1->length && j<arr2->length){
        if(arr1->a[i]<arr2->a[j]){
            arr3->a[k++]=arr1->a[i++];
        }
        else if(arr2->a[j]<arr1->a[i]){
            arr3->a[k++]=arr2->a[j++];
        }
        else{
            arr3->a[k++]=arr1->a[i++];
            j++;
        }
    }
    arr3->length=k;
    arr3->size=arr1->length+arr2->length+4;
    for(;i<arr1->length;i++){
        arr3->a[k]=arr1->a[i];
    }
    for(;j<arr2->length;j++){
        arr3->a[k]=arr2->a[j];
    }
    printf("union: ");
    for(int l=0;l<arr3->length;l++){
           printf("%d ",arr3->a[l]);
    }
    free(arr3);

}
void inter(struct array *arr1,struct array *arr2){
    
      struct array *arr3=(struct array *)malloc(sizeof(struct array));
      int i=0,j=0,k=0;
    while(i<arr1->length && j<arr2->length){
        if(arr1->a[i]<arr2->a[j]){
            i++;
        }
        else if(arr2->a[j]<arr1->a[i]){
            j++;
        }
        else{
            arr3->a[k++]=arr1->a[i++];
            j++;
        }
    }
    arr3->length=k;
    arr3->size=arr1->length+arr2->length+4;
    printf("intersection: ");
    for(int l=0;l<arr3->length;l++){
           printf("%d ",arr3->a[l]);
    }
    free(arr3);

}
void diff(struct array *arr1,struct array *arr2){
    
      struct array *arr3=(struct array *)malloc(sizeof(struct array));
      int i=0,j=0,k=0;
    while(i<arr1->length && j<arr2->length){
        if(arr1->a[i]<arr2->a[j]){
            arr3->a[k++]=arr1->a[i++];
        }
        else if(arr2->a[j]<arr1->a[i]){
            j++;
        }
        else{
            i++;
            j++;
        }
    }
    
    for(;i<arr1->length;i++){
        arr3->a[k++]=arr1->a[i];
    }
    arr3->length=k;
    arr3->size=arr1->length+arr2->length+4;
    printf("diffrence: ");
    for(int l=0;l<arr3->length;l++){
           printf("%d ",arr3->a[l]);
    }
    free(arr3);

}
int main(){
    char operation;
      struct array arr1={{2,6,10,15,25},10,5};
      struct array arr2={{3,6,7,15,20},10,5};
      printf("enter the operation to perform on set (u:union  i:intersection d:diffrence) : ");
      scanf(" %c",&operation);
      switch(operation)
      {
      case 'u': 
      sunion(&arr1,&arr2);
      break;
      case 'i':
      inter(&arr1,&arr2);
      break;
      case 'd':
      diff(&arr1,&arr2);
      break;
      }
return 0;
}