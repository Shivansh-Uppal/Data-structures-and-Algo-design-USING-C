#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define max 80
int push(char stack[max], int *top, char data[80])
{
      if(*top == max -1)
            return(-1);
      else
      {
            *top = *top + 1;
            strcpy(stack[*top], data);
            return(1);
      }
}
int pop(char stack[max], int *top, char data[80])
{
      if(*top == -1)
            return(-1);
      else
      {
            strcpy(data, stack[*top]);
            *top = *top - 1;
            return(1);
      }
}
int main()
{
      char stack[max], nm[80];
      int top,ch,reply;
      top = -1;   // Initialize Stack
      printf("\tMENU");
      printf("\n----------------------------\n");
      printf("      1. PUSH\n");
      printf("      2. POP\n");
      printf("      3. EXIT\n");
      printf("----------------------------\n");
      while(1)
      {
            printf("Choose operation : ");
            scanf("%d", &ch);
            switch (ch)
            {
                  case 1 : // push
                        printf("\nEnter string : ");
                        scanf("%s",nm);
                        reply = push(stack,&top,nm);
                        if(reply == -1)
                              printf("\n Stack is Full.\n");
                        else
                              printf("'%s' is Pushed in Stack.\n\n",nm);
                  break;
                  case 2 : // pop
                        reply = pop(stack,  &top,nm);
                        if(reply == -1)
                              printf("\n Stack is Empty \n");
                        else
                              printf("Popped string is : %s\n",nm);
                              printf("\n");
                  break;
                  case 3 :
                        exit(0);
                  default:
                        printf("Invalid operation \n");
            }
      }

      return 0;
}