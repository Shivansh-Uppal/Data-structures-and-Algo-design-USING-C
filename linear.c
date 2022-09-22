#include<stdio.h>

struct array{
    int length;
    int a[20];
};

int main(){
    struct array arr;
    int a;
    int flag=0;
    int low=0;
    printf("enter the array length: ");
    scanf("%d",&arr.length);
    printf("enter the array elements: ");
    for(int i=0;i<arr.length;i++){
        scanf("%d",&arr.a[i]);
    }
    int n;
    int high=arr.length-1;
    printf("enter the element to be searched: ");
    scanf("%d",&n);

    printf("Want to search by linear or binary search?\n");
    printf("1.linear\n2.binary\n");
    scanf("%d",&a);

    switch(a){
        case 1:
            for(int i=0;i<arr.length;i++){
                if(arr.a[i]==n){
                    printf("element found at index %d\n",i);
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                printf("element not found\n");
            }
            break;

        case 2:
            while(low<=high){
                int mid=(low+high)/2;
                if(arr.a[mid]==n){
                    printf("element found at index %d\n",mid);
                    break;
                }
                else if(arr.a[mid]<n){
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
            if(low>high){
                printf("element not found\n");
            }
            break;

        default:
            printf("invalid choice\n");
    }

//recurive way of linear and binary search

}