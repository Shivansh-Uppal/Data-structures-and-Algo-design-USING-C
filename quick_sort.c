   //the algorithm is as follows:
   //1. pick an element as pivot
   //2. partition the array around the pivot such that all elements less than the pivot are to the left of the pivot and all elements greater than the pivot are to the right of the pivot
   //3. recursively sort the left and right subarrays
   //4. return the sorted array

#include <stdio.h>
#include <stdlib.h>

int *arr;
int k;
void quick_sort(int arr[],int start,int end){
   if(start<end){
      int pivot=arr[end];
      int i=start;
      int j=end-1;
      while(i<=j){
         while(arr[i]<=pivot && i<=j)
            i++;
         while(arr[j]>pivot && i<=j)
            j--;
         if(i<j){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
         }
      }
      int temp=arr[i];
      arr[i]=arr[end];
      arr[end]=temp;
      for(int h=0;h<k;h++){
         printf("%d ",arr[h]);
      }
      printf("\n");
      quick_sort(arr,start,i-1);
      quick_sort(arr,i+1,end);
   }

   if(start==end){
      return;
   }
}
int main(){
   int i=0,j=0;
   int n;

   printf("Enter the number of elements in the array: ");
   scanf("%d",&n);
   arr=(int *)malloc(n*sizeof(int));
   printf("Enter the elements: ");

   for(i=0;i<n;i++){
      scanf("%d",&arr[i]);
   }
   k=n;
   quick_sort(arr,0,n-1);

   printf("The sorted array is: ");
   for(i=0;i<n;i++){
      printf("%d ",arr[i]);
   }
}

