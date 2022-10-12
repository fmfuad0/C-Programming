#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    if((ch>=0 && ch<=47) || (ch>=58 && ch<=64) || (ch>=91 && ch<=96) || (ch>=123 && ch<=127))
    {
        printf("This is a special character...");
    }
    else if(ch>=48 && ch<=57)
    {
        printf("This is a digit...");
    }
    else if((ch>=65 && ch<=90) || (ch>=97 && ch<=122))
    {
        if((ch=='a') || (ch=='e') || (ch=='i') || (ch=='o') || (ch=='u') || (ch=='A') || (ch=='E') || (ch=='I') || (ch=='O') || (ch=='U'))
        {
            printf("This is a vowel...");
        }
        else
        {
            printf("This is a consonant...");
        }
    }
}
