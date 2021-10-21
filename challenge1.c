#include <stdio.h>
#include <stdlib.h>
struct array{
    int a[50];
    int size;
    int length;
};
void missing(struct array *arr1){
    int i=arr1->a[0],j=0;
    while(arr1->length !=j){
        if(arr1->a[j]!=i){
          printf("%d ",i);
          i++;
          continue;
        }
        i++;
        j++;
    }
    printf("\n");
    for(int l=0;l<arr1->length;l++){
        printf("%d ",arr1->a[l]);
    }

    }

int main(){
      struct array arr1={{6,21,22,23,24,25,26,27,28,29,30},14,11};
      struct array arr={{0},50,30};
      for(int i=0;i<arr1.length;i++){
          arr.a[arr1.a[i]]++;
      }
      for(int i=arr1.a[0];i<=arr1.a[arr1.length-1];i++){
          if(arr.a[i]==0)
          printf("%d ",i);
      }
      printf("\n");
      missing(&arr1); //same function but diffrent approach 
return 0;
}