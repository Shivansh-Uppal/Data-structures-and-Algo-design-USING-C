#include <stdio.h>
struct stack{
int top;
int size;
int *s;
int length;
};
void push(struct stack *st,int x){
    if(st->top==st->size-1){
        printf("stack overflow");
    }
    else{
        st->top++;
        st->s[st->top]=x;
        st->length++;
    }
}
int pop(struct stack *st){
    int x=-1;
    if(st->top==-1){
        printf("stack underflow");
    }
    else{
        x=st->s[st->top];
        st->top--;
        st->length--;
    }
    return x;
}
void display(struct stack st){
        for(int i=0;i<st.length;i++)

        printf("%d ",st.s[i]);

}
int main(){
       struct stack st;
       st.size=10;
       st.top=-1;
       st.length=0;
       int ch,x;
       do{
            printf("\nenter the choice 1.push 2.pop 3.exit\n");
            scanf("%d",&ch);
            switch(ch){
                case 1: 
                printf("enter number to be pushed: ");
                scanf("%d",&x);
                push(&st,x);
                display(st);
                break;
                case 2:
                printf("popping.......");
                pop(&st);
                display(st);
                break;

            }

       }while(ch!=3);
return 0;
}