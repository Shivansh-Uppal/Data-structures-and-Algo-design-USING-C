#include <stdio.h>

     void add();
     void sub();
     void mul();
     
void add(){
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
       printf("enter elements of array 2:\n");
      for(int i=0;i<size;i++){
          for(int j=0;j<size;j++){
          scanf("%d",&arr2[i][j]);
      }
      }
      printf("result of addition\n");
      for(int i=0;i<size;i++){
          for(int j=0;j<size;j++){
          printf("%d ",arr1[i][j]+arr2[i][j]);
          if(j==size-1)
               printf("\n");
      }
     
}
      }
void sub(){
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
       printf("enter elements of array 2:\n");
      for(int i=0;i<size;i++){
          for(int j=0;j<size;j++){
          scanf("%d",&arr2[i][j]);
      }
      }
      printf("result of subtraction\n");
      for(int i=0;i<size;i++){
          for(int j=0;j<size;j++){
          printf("%d ",arr1[i][j]-arr2[i][j]);
          if(j==size-1)
               printf("\n");
      }
     
}
}
void mul(){
    int r,c,r2,c2;
      int arr1[10][10],arr2[10][10],result[50][50]={0};
      printf("enter the ROW size for array 1: ");
      scanf("%d",&r);
      printf("enter the column size for array 1: ");
      scanf("%d",&c);
      printf("enter elements of array 1:\n");
      for(int i=0;i<r;i++){
          for(int j=0;j<c;j++){
          scanf("%d",&arr1[i][j]);
      }
      }
      printf("enter the ROW size for array 2: ");
      scanf("%d",&r2);
      printf("enter the column size for array 2: ");
      scanf("%d",&c2);
       printf("enter elements of array 2:\n");
      for(int i=0;i<r2;i++){
          for(int j=0;j<c2;j++){
          scanf("%d",&arr2[i][j]);
      }
      }
      if(c==r2){
      for (int i = 0; i < r; ++i) {
      for (int j = 0; j < c2; ++j) {
         for (int k = 0; k < c; ++k) {
            result[i][j] += arr1[i][k] * arr2[k][j];
         }
      }
   }
   printf("result of multiplication\n");
   for (int i = 0; i < r; ++i) {
      for (int j = 0; j < c2; ++j) {
          printf("%d ",result[i][j]);
          if(j==c2-1)
          printf("\n");
}
   }
      }
      else{
          printf("error\n");
      }
}

int main(){
     int ch;
     
     do{
         printf("enter choice\n1.addition\n2.subtraction\n3.multiplication\n4.exit\n");
        scanf("%d",&ch);
        switch(ch){
            case 1: 
            add();
            break;

            case 2: sub();
            break;

            case 3: mul();
            break;

        }
     }while(ch!=4);
return 0;
}