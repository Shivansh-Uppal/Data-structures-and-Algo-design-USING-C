//implement linear and binary search case statements using recursion

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int i=0,j=0,t1=0;

float start ,end;

int *a,length;

//merge sort
static void Merge_sort(int arr[], int start, int end) {

    if (start >= end) {
        return;
    }

    int mid = start + (end - start) / 2;
    Merge_sort(arr, start, mid);
    Merge_sort(arr, mid + 1, end);

    int size = end - start + 1;
    int *arr_new = (int *) malloc(sizeof(int) * size);
    int i = start, j = mid + 1;

    for (int k = 0; k < size; k++) {
        if (i > mid) {
            arr_new[k] = arr[j++];
        } else if (j > end) {
            arr_new[k] = arr[i++];
        } else if (arr[i] < arr[j]) {
            arr_new[k] = arr[i++];
        } else {
            arr_new[k] = arr[j++];
        }
    }
    int index = start;
    for (int k = 0; k < size; k++) {
        arr[index++] = arr_new[k];
    }
}


//recursive implementation of linear search
int linear_search(int a[], int key,int len){
    if(len==0 || i==len)
        return -1;
    else if(a[i]==key)
        return i;
    else{
        i++;
        linear_search(a, key,len);
    }
}

//recursive implementation of binary search
int binary_search(int a[],int start,int key,int len){
     if (len>=start){
       j=start+((len-start)/2);
       if(a[j]==key)
        return j;
       else{
        if(a[j]==key)
            return j;
        else if(a[j]>key)
            binary_search(a,start,key,j-1);
        else
            binary_search(a,j+1,key,len);
    }
}
    return -1;
}

static int test(int size) {
    int *arr1 = (int *)malloc(sizeof(int) * size);
    int *arr2 = (int *)malloc(sizeof(int) * size);

    for (int i = 0; i < size; i++) {
        int j = rand();
        arr1[i] = j;
        arr2[i] = j;
    }

    Merge_sort(arr1, 0, size - 1);

    clock_t start1 = clock();
    int index1[4] = {0};
    for (int i = 0; i < 100; i++) {
        index1[0] = binary_search(arr1, 0, arr1[0],size-1);
        index1[1] = binary_search(arr1, 0, arr1[size / 2],size-1);
        index1[2] = binary_search(arr1, 0, arr1[size - 1],size-1);
        index1[3] = binary_search(arr1, 0, -1,size-1);
    }
    clock_t end1 = clock();

    clock_t start2 = clock();
    int index2[4] = {0};
    for (int i = 0; i < 100; i++) {
        index2[0] = linear_search(arr2, arr1[0],size-1);
        index2[1] = linear_search(arr2, arr1[size / 2],size-1);
        index2[2] = linear_search(arr2, arr1[size - 1],size-1);
        index2[3] = linear_search(arr2, -1,size-1);
    }
    clock_t end2 = clock();

    double time1 = (end1 - start1) * 1000.0 / CLOCKS_PER_SEC;
    double time2 = (end2 - start2) * 1000.0 / CLOCKS_PER_SEC;

    printf("size=%8d: binary searches: %8.3fms, %d %d %d %d\n",
           size, time1, index1[0], index1[1], index1[2], index1[3]);
    printf("size=%8d: linear searches: %8.3fms, %d %d %d %d\n",
           size, time2, index2[0], index2[1], index2[2], index2[3]);
    return 0;
}




int main(){

    printf("enter length of array: ");
    scanf("%d",&length);

    a=(int *)malloc(length*sizeof(int));
    printf("enter elements: ");
    for(int i=0;i<length;i++){
        scanf("%d",&a[i]);
    }

    printf("Enter the element to be searched: ");
    int element;
    scanf("%d", &element);

    printf("Which algorithm you would like to choose?\n1. Linear Search\n2. Binary Search\n");
    int choice;
    scanf("%d", &choice);

    int index;

    switch(choice){
        case 1:
            index = linear_search(a, element,length);
            if(index == -1){
                printf("Element not found\n");
            }
             else{
                printf("Element found at index %d\n", index);
            }
            break;
        case 2:
            index = binary_search(a,0, element,length-1);
            if(index == -1){
                printf("Element not found\n");
            }
            else{
                printf("Element found at index %d\n", index);
            }
            break;

        default:
            printf("Invalid choice\n");
    }

    for (int size = 1; size <= 1000000; size = size*2) {
        test(size);
    }
    return 0;
}