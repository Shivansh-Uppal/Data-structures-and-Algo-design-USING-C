#include <stdio.h>

void Input(int r, int c, int **arr)
{
    
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            printf("Enter the element at index arr[%d][%d] ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
   
}

void Display(int r, int c, int **arr)
{
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
int main() {
    
    int r, c,arr[30][30];
  
    
    printf("Enter number of rows ");
    scanf("%d", &r);
    printf("Enter number of columns ");
    scanf("%d", &c);

    Input(r,c,arr);
    Display(r,c,arr);
    
    return 0;
}


