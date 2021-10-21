#include <stdio.h>
void trans(){
    int size;
      int arr1[10][10],arr2[10][10];
      printf("enter the size: ");
      scanf("%d",&size);
      printf("enter elements of array 1:\n");
      for(int i=0;i<size;i++){
          for(int j=0;j<size;j++){
          scanf("%d",&arr1[i][j]);
      }
      }
       for(int i=0;i<size;i++){
           for(int j=0;j<size;j++){
               arr2[j][i]=arr1[i][j];
           }
           
       }
       printf("the trransposed matrix is:\n");
      for(int i=0;i<size;i++){
           for(int j=0;j<size;j++){
               printf("%d ",arr2[i][j]);
               if(j==size-1)
               printf("\n");
           }
       }
      
}
int main(){
      trans();
return 0;
}