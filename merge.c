#include <stdio.h>
#include<stdlib.h>

void merge(int *arr,int s,int m,int l){
    int i=s,j=m+1,k=0;

    int *temp=(int *)malloc((l-s+1)*sizeof(int));
    while(i<=m && j<=l){
        if(arr[i]<arr[j]){
            temp[k]=arr[i];
            i++;
        }
        else{
            temp[k]=arr[j];
            j++;
        }
        k++;
    }

    while(i<=m){
        temp[k]=arr[i];
        i++;
        k++;
    }

    while(j<=l){
        temp[k]=arr[j];
        j++;
        k++;
    }

    for(int i=s;i<=l;i++){
        arr[i]=temp[i-s];
    }

    free(temp);

    for(int i=0;i<=l;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void merge_sort(int *arr, int start, int end){
    if(start<end){
        int mid=start+(end-start)/2;
        merge_sort(arr,start,mid);
        merge_sort(arr,mid+1,end);
        merge(arr,start,mid,end);
    }
}

int main(){
    int *arr;
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    arr=(int *)malloc(n*sizeof(int));
    printf("Enter the elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    merge_sort(arr,0,n-1);
return 0;
}