#include <stdio.h>
#include<stdlib.h>
struct element{
    int i;
    int j;
    int x;
};
struct sparse{
       int m;
       int n;
       int num;
       struct element *e;
};
void create(struct sparse *s){
    printf("enter dimensions: ");
    scanf("%d %d",&s->m,&s->n);
    printf("number of non zero element");
    scanf("%d",&s->num);

    s->e=(struct element *)malloc(s->num*sizeof(struct element));
    printf("enter the non zero element: ");
    for(int i=0;i<s->num;i++){
        scanf("%d %d %d",&s->e[i].i,&s->e[i].j,&s->e[i].x);   // .i row  // .j coloumn // .x element
    }
}
void display(struct sparse s){
    int i,j,k=0;

    for(i=0;i<s.m;i++){
        for(j=0;j<s.n;j++){
             if(i==s.e[k].i && j==s.e[k].j)    // row==row number defined coloumn=coloumn number defined
             printf("%d ",s.e[k++].x);         // element representation at the particular row number and column number
             else{
                 printf("0 ");                 // cod'n not available print 0
             }
        }
        printf("\n");
    }
}
int main(){
     struct sparse s;
     create(&s);
     display(s);
return 0;
}