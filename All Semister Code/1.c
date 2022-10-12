#include<stdio.h>
int main()
{
    int array[10][10];
    int row,col;
    printf("Enter the value of row and column: ");
    scanf("%d %d", &row, &col);
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d", &array[i][j]);
        }
    }

    for(int i=0;i<row;i++)
    {
        int sum=0;
        for(int j=0;j<col;j++)
        {
            sum+=array[i][j];
        }
        printf("Sum of row %d is= %d\n\n",i,sum);
    }

}
