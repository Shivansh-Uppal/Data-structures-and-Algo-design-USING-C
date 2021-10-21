#include <stdio.h>
#include <stdlib.h>
struct array{
    int a[20];
    int size;
    int length;
};
void dup(struct array *arr){
    int lastdup=0;
    for(int i=0;i<arr->length;i++){
        if(arr->a[i]==arr->a[i+1] && arr->a[i]!=lastdup){
            printf("%d ",arr->a[i]);
            lastdup=arr->a[i];
        }      
    }
    for(int i=0;i<arr->length-1;i++){
        
        if(arr->a[i]==arr->a[i+1]){
            int j=i+1;
            printf("\n");
            while(arr->a[j]==arr->a[i]) j++;
            printf("%d is appearing %d times",arr->a[i],j-i);
            i=j-1;
        }
    }
}
int main(){
     struct array arr={{3,6,8,8,10,12,15,15,15,20,20},14,11};
     dup(&arr);
return 0;
}