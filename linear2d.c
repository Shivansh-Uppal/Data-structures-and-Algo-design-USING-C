#include <stdio.h>
struct array{
    int arr[20][20]; 
    int lengthRow;
    int lengthColumn;
};
void LinearSearch(struct array *arr,int search){   //search:number to be searched
    int count=0;
     for(int i=0;i<arr->lengthRow;i++){
        for(int j=0;j<arr->lengthColumn;j++){
            printf("%d ",arr->arr[i][j]);
             }
        }
        printf("\n");
        for(int i=0;i<arr->lengthRow;i++){
        for(int j=0;j<arr->lengthColumn;j++){    //traversing through the array
            if(arr->arr[i][j]==search){
                printf("element found at position [%d][%d]\n",i,j); //printing every occurance of element in the array
                count++;   
            }
        }
    }
  if(count==0){
      printf("element %d is not found",search);   //printing only if element is not found
  }
}
int main(){
    struct array arr;
    printf("enter the array row needed: ");
    scanf("%d",&arr.lengthRow);
    printf("enter the array columns needed: ");
    scanf("%d",&arr.lengthColumn);
    printf("enter the array elements: ");
    for(int i=0;i<arr.lengthRow;i++){
        for(int j=0;j<arr.lengthColumn;j++){  
            scanf("%d",&arr.arr[i][j]);
        }
        }
     LinearSearch(&arr,1);   
return 0;
}
