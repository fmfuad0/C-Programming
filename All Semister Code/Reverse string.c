
#include<stdio.h>
int main()
{
    int i,j;
    char string1[50];
    gets(string1);
    for(i=0;string1[i]!='\0';i++);
    for(j=i;j>=0;j--)
    {
        printf("%c", string1[j]);
    }


}
