
#include <stdio.h>

int main()
{
    char string[50],string2[50];
    printf("Enter message: ");
    gets(string);
    for (int i=0;string[i]!='\0';i++)
    {
        string[i]=string[i]+1;
    }
    printf("Your encrypted message is: \n");
    puts(string);
    printf("\n\nEnter encrypted message: \n");
    gets(string2);
    for (int i=0;string2[i]!='\0';i++)
    {
        string2[i]=string2[i]-1;
    }
    printf("\nDecrypted message is: \n");
    puts(string2);
}
