#include <stdio.h>
#define MAX_SIZE 15
int n=0,queue[MAX_SIZE];

void enqueue(int item) {
        
        if (n == MAX_SIZE - 1) {
                printf("%s\n", "ERROR: Queue is full");
                return;
        }
        queue[n++] = item;
}

void dequeue() {
        
       int item=0;
        if (n == 0) {
                printf("%s\n", "ERROR: Queue is empty");
                return;
        }
        int i, max = 0;
       
        for (i = 1; i < n; i++) {
                if (queue[max] < queue[i]) {
                        max = i;
                }
        }
        item = queue[max];
      
        queue[max] = queue[n - 1];
        n = n - 1;
        return;
}

void display(){
    int i=0;
    while(i!=n){
          printf("%d ",queue[i]);
          i++;
    }
    printf("\n");
}

int main(){
    int ch,num;
    do{
        printf("\n**********************MENU**********************\n");
        printf("1.enqueue\n2.dequeue\n3.display\n4.exit\n");
        printf("enter the choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1: 
            printf("enter the number want to enqueue: ");
            scanf("%d",&num);
            enqueue(num);
            break;

            case 2:
            dequeue();
            break;

            case 3:
            display();
            break;
        }

    }while(ch!=4);
    return 0;
}