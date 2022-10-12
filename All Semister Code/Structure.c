#include <stdio.h>

struct stuInfo
{
    int id,fee;
    char name[50],dept[5],address[50];
}ed[20];
void insertInfo();
int main()
{
    printf("...Enter 1 to insert info: \n");
    int n;
    scanf("%d", &n);
    fflush(stdin);
    switch(n)
    {
    case 1:
        {
            insetrInfo();        }
    default:
        {
            return 0;
        }

    }
}
int j=0;
    void insetrInfo()
    {
       for(int i=1;i<=50;i++)
        {
            if(i>1)
            {
                printf("\n\nPress enter for another entry...\n");
    printf("Press any other key without enter for main menu...\n");
    char ch;
    scanf("%c", &ch);
    if(ch=='\n')
    {
        insertInfo();
    }
    else
    {
        main();
    }
            }
            printf("Enter name: ");
    gets(ed[j].name);
    printf("Enter ID: ");
    scanf("%d",&ed[j].id);
    printf("Enter admission_fee: ");
    scanf("%d",&ed[j].fee);
    fflush(stdin);
printf("Enter address: ");
    scanf("%d",&ed[j].address);
    fflush(stdin);
    j++;
        }
    }
