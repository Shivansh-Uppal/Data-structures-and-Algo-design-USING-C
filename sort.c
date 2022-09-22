//implement selection, bubble and insertion sort

#include<stdio.h>
#include<stdlib.h>

void selection_sort(int a[],int length){
    int smallest;
    for(int i=0;i<length-1;i++){
       smallest=i;
       for(int j=i;j<length;j++){
        if(a[j]<a[smallest]){
           smallest=j;
        }
       }
    if(i!=smallest){
        int temp=a[i];
        a[i]=a[smallest];
        a[smallest]=temp;
    }
    }
    for(int i=0;i<length;i++){
        printf("%d ",a[i]);
    }
}

void insertion_sort(int a[],int length){
    int i,j,temp;
    for(i=1;i<length;i++){
        temp=a[i];
        for(j=i-1;j>=0;j--){
            if(temp<a[j]){
                a[j+1]=a[j];
            }
            else{
                break;
            }
        }
        a[j+1]=temp;
    }

    for(int i=0;i<length;i++){
        printf("%d ",a[i]);
    }
}

void bubble_sort(int a[],int length){
    int i,j,temp;
    for(i=0;i<length-1;i++){
        for(j=0;j<length-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    for(int i=0;i<length;i++){
        printf("%d ",a[i]);
    }
}

int main(){
    int i=0,j=0,t1=0;
    float start ,end;
    int *a,length;
    int choice;

    printf("Enter the length of the array: ");
    scanf("%d",&length);
    a=(int *)malloc(sizeof(int)*length);

    printf("Enter the elements of the array: ");
    for(i=0;i<length;i++){
        scanf("%d",&a[i]);
    }

    printf("Enter the choice of sorting: \n1.Selection Sort\n2.Bubble Sort\n3.Insertion Sort\n");
    scanf("%d",&choice);

    switch(choice){
        case 1:
            selection_sort(a,length);
            break;
        case 2:
            bubble_sort(a,length);
            break;
        case 3:
            insertion_sort(a,length);
            break;
        default:
            printf("Invalid choice");
    }
}

