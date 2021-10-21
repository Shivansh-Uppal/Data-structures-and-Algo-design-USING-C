#include <stdio.h>
double sine(int x, int n){
     double r=1,b=0;
  
             for(;n>0;n--){
                 if(n%2==0){
                     r=r*(1+((x*x)/(double)((n*2)*((n*2)+1))));
                 }
                 else{
                      r=r*(1-((x*x)/(double)((n*2)*((n*2)+1))));
                 }
             }
          
   return (double) r*x;
}
int main(){
     printf("%lf",sine(1,100));
return 0;
}