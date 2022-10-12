

#include<stdio.h>
int main()
{
    int i;
    char string1[50];
    gets(string1);
    for(i=0;string1[i]!='\0';i++)
    {
        if(string1[i]>='a' && string1[i]<='z')
        {
            string1[i]=string1[i]-32;
        }
        else if(string1[i]>='A' && string1[i]<='Z')
        {
            string1[i]=string1[i]+32;
        }
    }
    puts(string1);
}
