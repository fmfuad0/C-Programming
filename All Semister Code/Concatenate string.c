#include<stdio.h>
int main()

{
    int i,j;
    char string1[50],string2[50];
    gets(string1);
    gets(string2);
    for(i=0;string1[i]!='\0';i++);
    j=0;
    for(i;string2[j]!='\0';i++)
    {
        string1[i]=string2[j];
        j++;
    }
    puts(string1);
}
