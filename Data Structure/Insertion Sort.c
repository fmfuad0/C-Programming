
///Insertion Sort
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[j];
                for(int k=j;k>i;k--)
                {
                    arr[k]=arr[k-1];
                }
                arr[i]=temp;
            }
        }
    }

    for(int i=0;i<n;i++)
        printf("%d ", arr[i]);
}
