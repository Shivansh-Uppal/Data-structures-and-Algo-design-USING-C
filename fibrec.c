#include <stdio.h>
int fib(int n){
    if(n==1){
        return 1;
    }
    else if(n==0){
        return 0;
    }
    else{
        return fib(n-2)+fib(n-1);
    }
}
int main(){
     printf("%d",fib(7));
return 0;
}