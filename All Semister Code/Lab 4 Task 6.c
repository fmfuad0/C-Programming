#include<stdio.h>
int main()
{
    int x;
    char a;
    printf("Enter Gender(M or F):");
    scanf("%c",&a);
    printf("Enter Age:");
    scanf("%d",&x);


    switch(a=='M')
    {
    case 1:
        switch(x>=21)
        {
        case 1:
            printf("He is eligible for marriage.");
            break;
            case 0:
            printf("He is not eligible for marriage.");
            break;
        }
    break;
    }




    switch(a=='F')
    {
        case 1:
            switch (x>=18)
            {
                case 1:
                    printf("She is eligible for marriage.");
                    break;
                case 0:
        printf("She is Not eligible for marriage.");
            }
            break;
}
}

