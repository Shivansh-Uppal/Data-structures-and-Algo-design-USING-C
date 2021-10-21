#include <stdio.h>
#include<stdlib.h>
#include<string.h>
struct stack{
     int top;
     int size;
     int *s;
};
void push(struct stack *st,char x){
       if(st->top==st->size-1)
       printf("stack overflow");
       else{
           st->top++;
           st->s[st->top]=x;
       }
       
}
int isoperand(char x){
    if(x=='+' || x=='-' ||x=='*' ||x=='/')
    return 0;
    else
    return 1;
}
int pop(struct stack *st){
    int x=-1;
    if(st->top==-1){
        printf("stack underflow");
    }
    else{
        x=st->s[st->top];
        st->top--;
    }
    return x;
}
int iseval(char *postfix){
    struct stack st;
    st.top=-1;
    st.size=strlen(postfix);
    st.s=(int*)malloc(sizeof(st.size)*sizeof(char));
    int i,x1,x2,r;
    for(i=0;postfix[i]!='\0';i++){
        if(isoperand(postfix[i]))
        push(&st,postfix[i]-'0');
        else{
            x2=pop(&st);
            x1=pop(&st);
            switch(postfix[i]){
                case '+':
                r=x1+x2;
                push(&st,r);
                break;
                 
                case '-':
                r=x1-x2;
                push(&st,r);
                break;

                case '*':
                r=x1*x2;
                push(&st,r);
                break;

                case '/':
                r=x1/x2;
                push(&st,r);
                break;
            }
        }
        
    }
    return pop(&st);
}

int main(){
    char arr[100]={0};
    printf("enter the expression: ");
    scanf("%s",arr);
      printf("result is %d\n",iseval(arr));

return 0;
}