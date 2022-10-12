


#include<stdio.h>
int main()
{
    int i,alphabet=0,digit=0,character=0;
    char string1[50];
    gets(string1);
    for(i=0;string1[i]!='\0';i++)
    {
        if((string1[i]>='a' && string1[i]<='z') || (string1[i]>='A' && string1[i]<='Z'))
        {
            alphabet++;
        }
        else if(string1[i]>='0' && string1[i]<='9')
        {
            digit++;
        }
        else
        {
            character++;
        }
    }
    printf("Total alphabet= %d\n",alphabet);
    printf("Total digit= %d\n",digit);
    printf("Total Special character= %d\n",character);
}
