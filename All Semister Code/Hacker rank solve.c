
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n,high=0,low=0,high_c=0,low_c=0,temp;
    long long int arr[1000];
    scanf("%d", &n);
    for (int i=0;i<n;i++)
        scanf("%llu", &arr[i]);
        low=arr[0];
        high=arr[0];
    for(int i=1;i<n;i++)
    {
        //printf("I= %d\n", i);
        //printf("high= %d\n", high);
        //printf("low= %d\n", low);
        if(arr[i]>high)
        {
            //printf("Updating high...\n");
            high=arr[i];
            //printf("Updating high count...\n");
            high_c++;
            //printf("High count is %d\n");
        }
        else if(arr[i]<low)
        {
            //printf("Updating low...\n");
            low=arr[i];
            //printf("Updating low count...\n");
            low_c++;
            //printf("low count is %d\n",low_c);
        }
    }
    printf("%d %d", high_c,low_c);
}
