#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
struct stack{
int top;
int size;
int *s;
};


int isoperand(char x){
    if(x=='+' || x=='-' || x=='*' || x=='/')
    return 0;
    else 
    return 1;
}
void push(struct stack *st,int x){
    if(st->top==st->size-1);
    else{
        st->top++;
        st->s[st->top]=x;
    }
}
int pop(struct stack *st){
    int x=-1;
    if(st->top==-1);
    else{
        x=st->s[st->top];
        st->top--;
    }
    return x;
}
    

int pre(char x){
    if(x=='+' || x=='-')
    return 1;
    else if(x=='*' || x=='/')
    return 2;
    return 0;
}
int stacktop(struct stack st){
    if(st.top<=-1)
    return -1;
    else
    return st.s[st.top];
}
int isempty(struct stack st){
         if(st.top==-1)
         return 1;
         else
         return 0;
    }
char *convert(char *infix){
   
    struct stack st;
    st.top=-1;
    st.size=strlen(infix);
    push(&st,0);
    char *postfix;
    postfix=(char*)malloc(strlen(infix+2)*sizeof(char));
    int i=0,j=0;
    while(infix[i]!='\0'){
           if(isoperand(infix[i]))
           postfix[j++]=infix[i++];
           else{
               if(pre(infix[i])>pre(stacktop(st)))
               push(&st,infix[i++]);
               else
               postfix[j++]=pop(&st);
           }
    }
    while(!isempty(st)){
        postfix[j++]=pop(&st);
    }
    postfix[j]='\0';
    return postfix;
}


int main(){
      char *infix;
      char arr[300];
      
      printf("enter the string: ");
      scanf("%s ",arr);
      infix=(char*)malloc((strlen(arr)+1)*sizeof(char));
      infix=arr;  
        
char *postfix;
postfix=convert(infix);
printf("%s ",postfix);
return 0;
}