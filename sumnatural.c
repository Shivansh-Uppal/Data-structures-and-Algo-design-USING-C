#include <stdio.h>
int sum(int n){
    if (n==0)
    return 0;
    else{
        int add=sum(n-1)+n;
        return add;                              // sum(10)   sum(9)+10   
    }
}
int main(){
    int n;
     printf("sum of natural numbers required: ");
     scanf("%d",&n);
     printf("%d",sum(n));
return 0;
}