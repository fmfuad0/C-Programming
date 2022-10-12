#include<stdio.h>
int main()
{
    int x;
    char a;
    printf("Enter Gender(M or F):");
    scanf("%c",&a);
    printf("Enter Age:");
    scanf("%d",&x);
    switch(x>=18)
    {
    case 1:
        switch(a=='M')
        {
        case 1:
            printf("He is eligible for voting.");
            break;
        }
        switch (a=='F')
        {
            case 1:
        printf("She is eligible for voting.");
        }
    break;
    case 0:
        printf("Not eligible for voting.");
    }
}
