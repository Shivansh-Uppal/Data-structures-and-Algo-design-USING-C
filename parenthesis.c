#include <stdio.h>
#include<stdlib.h>
#include<string.h>
struct stack{
       int size;
       int top;
       char *s;
};
void push(struct stack *st,int x){
    if(st->top==st->size-1){
        printf("stack overflow");
    }
    else{
        st->top++;
        st->s[st->top]=x;
    }
}
void pop(struct stack *st){
    
    if(st->top==-1){
        printf("stack underflow");
    }
    else{
        st->s[st->top];
        st->top--;
    }
}
int isempty(struct stack st){
    if(st.top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isbalance(char* exp){
        struct stack st;
        st.size=strlen(exp);
        st.top=-1;
        st.s=(char*)malloc(st.size*sizeof(char));
        for(int i=0;exp[i]!='\0';i++){
            if(exp[i]=='('){
                push(&st,exp[i]);
            }
            else if(exp[i]==')'){
                if(isempty(st))
                return 0;
                pop(&st);
            }
        }
        return isempty(st)? 1:0;
}
int main(){
    char exp[100];
    int x;
    printf("enter the string: ");
    //scanf("%s",exp);
    gets(exp);
    x=isbalance(exp);
    if(x==1){
        printf("correct");
    }
    else{
        printf("incorrect");
    }
     
return 0;
}