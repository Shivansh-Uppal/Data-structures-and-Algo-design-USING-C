#include <stdio.h>
#include <string.h>
# define size 100

unsigned char stack[size], top;

void push(int new)
{
    if (top >= size-1)
    {
        printf("\nSTACK OVERFLOW");
    }
    else
    {
        top++;
        stack[top]=new;
    }
}

int pop()
{
    char a;
    if (top == -1)
    {
        printf("\nSTACK UNDERFLOW");
    }
    else
    {
        printf("\n%c is popped", stack[top]);
        a=stack[top];
        top--;
        return a;
    }
}
int main() {
    
    char str[size];
    char rev[size];
    unsigned int i;
    unsigned int len;
    
    printf("enter string : ");
    scanf("%s", str);
    for (i=0; i<strlen(str); i++)
    {
        push(str[i]);
    }
    
    
    len=strlen(str);
    for (i=0; i<len; i++)
    {
        rev[i]=pop();
    }
    
    printf("\nreversed string : ");
    for (i=0; i<strlen(str); i++)
    {
        printf("%c", rev[i]);
    }
   
    
    
    return 0;
}