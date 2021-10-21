#include <stdio.h>
#include<math.h>
int power(int n,int k){
    if(k==0){
        return 1;
    }
    else{
        return power(n,k-1)*n;
    }
}
int main(){
      int n,k;
      scanf("%d %d",&n,&k);
      printf("%d",power(n,k));
return 0;
}