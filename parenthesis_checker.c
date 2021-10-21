#include <stdio.h>
#include<stdlib.h>
#include<string.h>

struct stack{
    int size;
    int top;
    char *s;
};
int isempty(struct stack st){
       if(st.top==-1)
       return 1;
       else
       return 0;
}
void push(struct stack *st,int x){
      if(st->top==st->size-1)
      printf("stack overflow\n");
      else{
          st->top++;
          st->s[st->top]=x;
      }
}
void pop(struct stack *st){
    if(st->top==-1)
    printf("stack underflow");
    else{
        st->top--;
    }
}
int isbalance(char *exp){
    struct stack st;
       st.top=-1;
       st.size=strlen(exp);
       st.s=(char*)malloc(st.size*sizeof(char));
    for(int i=0;exp[i]!='\0';i++){
        if(exp[i]=='(')
        push(&st,exp[i]);
        else if(exp[i]==')'){
            if(isempty(st))
            return 0;
            pop(&st);
        }
    }
    return isempty(st)?1:0;
}
int main(){
    char exp[100]={0};
    printf("enter the string: ");
    scanf("%s",exp);
       if(isbalance(exp)==0)
          printf("incorrect");
       else
          printf("correct");
return 0;
}