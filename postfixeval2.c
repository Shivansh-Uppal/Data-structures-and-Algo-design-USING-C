#include <stdio.h>
#include <string.h>
#include<ctype.h>
#include <stdlib.h>
 
struct Stack
{
    int top;
    unsigned capacity;
    int* s;
};
 

struct Stack* createStack( unsigned capacity )
{
    struct Stack* stack = (struct Stack*) malloc(sizeof(struct Stack));
 
    if (!stack) 
    return NULL;
 
    stack->top = -1;
    stack->capacity = capacity;
    stack->s = (int*) malloc(stack->capacity * sizeof(int));
 
    if (!stack->s) 
    return NULL;
 
    return stack;
}
 
int isEmpty(struct Stack* stack)
{
    return stack->top == -1 ;
}
 
char peek(struct Stack* stack)
{
    return stack->s[stack->top];
}
 
char pop(struct Stack* stack)
{
    if (!isEmpty(stack))
        return stack->s[stack->top--] ;
    return '$';
}
 
void push(struct Stack* stack, char op)
{
    stack->s[++stack->top] = op;
}
 
 

int evaluatePostfix(char* exp)
{
   
    struct Stack* stack = createStack(strlen(exp));
    int i;
 

    if (!stack) return -1;
 
    for (i = 0; exp[i]; ++i)
    {
       
        if (isdigit(exp[i]))
            push(stack, exp[i] - '0');
 
        else
        {
            int val1 = pop(stack);
            int val2 = pop(stack);
            switch (exp[i])
            {
            case '+': push(stack, val2 + val1); break;
            case '-': push(stack, val2 - val1); break;
            case '*': push(stack, val2 * val1); break;
            case '/': push(stack, val2/val1); break;
            }
        }
    }
    return pop(stack);
}
 
int main()
{
    char exp[100]={0};
    printf("enter the expression: ");
    scanf(" %s",exp);
    printf ("postfix evaluation: %d", evaluatePostfix(exp));
    return 0;
}