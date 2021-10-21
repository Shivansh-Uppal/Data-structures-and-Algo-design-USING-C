#include <stdio.h>
struct array{
    int a[20];
    int size;
    int length;
};
void sortIN(struct array *arr, int x){
    int i=arr->length-1;
    while(arr->a[i]>x){
        arr->a[i+1]=arr->a[i];
        i--;
    }
    arr->a[i+1]=x;
     for(int i=0;i<arr->length+1;i++){
         printf("%d ",arr->a[i]);
     }
     printf("\n");
     arr->length++;
}
 void checksort(struct array *arr){
     for(int i=0;i<arr->length;i++){
         printf("%d ",arr->a[i]);
     }
     for(int i=0;i<arr->length-1;i++){
        if(arr->a[i]>arr->a[i+1]){
           printf("not sorted");
           return;
        }
     }
     printf("sorted");
}
int main(){
struct array arr={{2,3,4,6,8},10,5};
sortIN(&arr,5);
checksort(&arr);

return 0;
}