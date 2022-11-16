
///Selection Sort {For 10 elements}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10];
    for(int i=0;i<10;i++)
    {
        scanf("%d", &arr[i]);
    }
    int t=10;
    int temp,index;
    for(int i=0;i<10;i++)
    {
        int max=arr[0];
        for(int j=0;j<10-i;j++)
        {
            if(arr[j]>=max)
            {
                max=arr[j];
                index=j;
            }
        }
        temp=arr[10-1-i];
        arr[10-1-i]=max;
        arr[index]=temp;
    }
    printf("\n\nSORTED ARRAY: \n");
    for(int i=0;i<10;i++)
        printf("%d ",arr[i]);
}
