#include <stdio.h>
#include<stdlib.h>
struct stack{
       int top1;
       int top2;
       int size;
       int *s;
};
void pushB(struct stack *st,int x){
    if(st->top2-st->top1==1){
        printf("STACK OVERFLOW");
    }
    else{
        st->top2=st->top2-1;
        st->s[st->top2]=x;
    }
}
void pushA(struct stack *st,int x){
    if(st->top2-st->top1==1){
        printf("STACK OVERFLOW");
    }
    else{
        st->top1=st->top1+1;
        st->s[st->top1]=x;
    }
}
void display(struct stack st){
         printf("elements of stack A: ");
         for(int i=0;i<=st.top1;i++){
             printf("%d ",st.s[i]);
         }
         printf("\n");
         printf("elements of stack B: ");
         for(int i=st.size;i>=st.top2;i--){
             printf("%d ",st.s[i]);
         }
         printf("\n");
         printf("elements of stack: ");
         for(int i=0;i<=st.top1;i++){
             printf("%d ",st.s[i]);
         }
         for(int i=st.size;i>=st.top2;i--){
             printf("%d ",st.s[i]);
         }
           printf("\n");
}
void popA(struct stack *st){
       if(st->top1>=0)
       st->top1--;
       else
       printf("stack underflow");
       
}
void popB(struct stack *st){
       if(st->top2<=st->size)
       st->top2++;
       else
       printf("stack underflow");
}
int main(){
        struct stack st;
        int ch,n;
        printf("enter the size of stack: ");
        scanf("%d",&st.size);
        st.s=(int*)malloc(st.size*sizeof(int));
        st.top1=-1;
        st.top2=st.size+1;
        do{
printf("enter the choice\n1.push from A\n2.push from B\n3.pop from A\n4.pop from B\n5.display\n6.exit\n");
scanf("%d",&ch);
switch(ch){
    case 1: 
    printf("enter the element to push from A: ");
    scanf("%d",&n);
    pushA(&st,n);
    break;

    case 2:
    printf("enter the element to push from B: ");
    scanf("%d",&n);
    pushB(&st,n);
    break;

    case 3:
    printf("popping.....");
    popA(&st);
    break;

    case 4:
    printf("popping.....");
    popB(&st);
    break;

    case 5:
    printf("displaying.....");
    display(st);
    break;
}
        }while(ch!=6);
return 0;
}