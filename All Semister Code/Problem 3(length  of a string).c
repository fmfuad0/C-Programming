
#include<stdio.h>
int main()
{
    char string[50];
    int length=0;
    gets(string);
    for(int i=0;string[i]!='\0';i++)
    {
        length++;
    }

    printf("Length is= %d",length);

}
