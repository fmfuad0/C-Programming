#include<stdio.h>
int main()
{
    int a[100];
    int i;
FILE *read=fopen("Mahady.text","r");
char sr[100];
while(!feof(read))
{
    fgets(sr,100,read);

}
for(i=0;sr[i]!='\0';i++)
{
    a[i]=sr[i]-7;
    printf("%c",a[i]);

}
return 0;
}
