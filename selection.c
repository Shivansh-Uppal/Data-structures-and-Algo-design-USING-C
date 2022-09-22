//implementing selection sort
#include<stdio.h>

void selection(int a[],int n){
    int j,i,min;
    for(i=0;i<n-1;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        int temp=a[i];
        a[i]=a[min];
        a[min]=temp;
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
    selection(a,n);
}