//implementing insertion sort

#include<stdio.h>
void insertion(int a[],int n){
    int i,j;
    for(j=1;j<n;j++){
        int key=a[j];
        i=j-1;
        while(i>=0 && a[i]>key){
        a[i+1]=a[i];
        i--;
    }
    a[i+1]=key;
    }

    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}

int main(){
    int a[20];
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    insertion(a,n);
}