
#include<stdio.h>
int main()
{
    int i,j,length=0;
    char string1[50];
    gets(string1);
    for(i=0;string1[i]!='\0';i++)
    {
        length++;
    }
    printf("%d\n", length);
    for(i=0;i<length/2;i++)
    {
        if(string1[i]==string1[length-i-1])
        {
        }
        else
        {
            printf("Not palindrome...");
            return 0;
        }

    }
    printf("Palindrome...");


}
