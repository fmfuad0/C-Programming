
#include<stdio.h>
#include<string.h>
#include<conio.h>
void setColor(int color);
int login();
void login_Verify();
void admin_Panel();
void student_Panel();
void add_Info();
void highest_Cgpa();
void student_Details();
void print_Info();
void sort_Details();
void delete_Details();
void change_Password();
void update_Info();
int x=0;
int verify=0;
char admin_Username[]="admin";
char admin_Password[50]="admin0";
char student_Username[]="student";
char student_Password[]="student";


struct student
{
    int id;
    float cgpa;
    char name[50],dept[5];
}stu[80];

int main()
{
    printf("\n\n");
    printf("\t**********************************************************\n");
    printf("\t**\t\t\t\t\t\t\t**\n");
    printf("\t**\t\tSTUDENT MANAGEMENT SYSTEM\t\t**\n");
    printf("\t**\t\t\t\t\t\t\t**\n");
    printf("\t**********************************************************\n");
    static int check=0;
    static int count=0;
    system("COLOR 04");
    printf("\n");
    while(count==0)
    {
        count++;
        check=login(verify);
    }
    if(check==1)
        {

            login_Verify(check);
        }
    else if(check==2)
        {
            login_Verify(check);
        }
    else
    {
        printf("Invalid Input");
        return 0;
    }

    printf("\n\n");
}


int login()
{
    printf("\t*************** LOGIN PANEL *******************\n\n\n");
    printf("\t1.Admin Panel\n");
    printf("\t2.Student Panel\n\n");
    printf("\t\tEnter your choice:");
    int input;
    scanf("%d", &input);
    if(verify==0)
    {
    if(input==1)
        verify=1;
    if(input==2)
        verify=2;
        printf("\n\n");
    return verify;
    }

    if(verify!=0)
    {
        if(input==1)
        admin_Panel();
    if(input==2)
        student_Panel();
    }
}

void login_Verify(x)
{
    static int counter=0;
    while(counter==0)
    {
        counter++;
    ///for Admin
    if(x==1)
    {
        fflush(stdin);
        char username[50],password[50];
        printf("\tEnter Username: ");
        gets(username);
        fflush(stdin);
        printf("\n\tEnter Password: ");
        gets(password);
        int a,b;
        a=strcmp(username,admin_Username);
        b=strcmp(password,admin_Password);
        if(a==0 && b==0)
        {
            admin_Panel();

        }
        else
            printf("\n\n***************Invalid username or password***********");
    }


    ///for Student
    else if(x==2)
    {
        fflush(stdin);
        char username[50],password[50];
        printf("\tEnter Username: ");
        gets(username);
        fflush(stdin);
        printf("\n\tEnter Password: ");
        gets(password);
        int f;
        if(strcmp(username,student_Username)&& strcmp(password,student_Password))
        {
            printf("\n\n***************Invalid username or password***********");
        }
        else
            student_Panel();
    }

    }

}

void admin_Panel()
{
    system("COLOR 0A");
    printf("\n\n\t*************** LOGIN SUCCESSFULL *******************\n\n");
    printf("\n\n\t*************** ADMIN PANEL *******************\n\n\n");
    int n;
    printf("\t\t\tMAIN MENU\n");
    printf("\n");
    printf("\t\t 1.Add Student Info.\n");
    printf("\t\t 2.Print All Info.\n");
    printf("\t\t 3.Search Highest CGPA.\n");
    printf("\t\t 4.Student Details.\n");
    printf("\t\t 5.Sort Student Details.\n");
    printf("\t\t 6.Delete Student Details.\n");
    printf("\t\t 7.Go to Login Page.\n");
    printf("\t\t 8.Change password.\n");
    printf("\t\t 9.Update Student Info.\n");
    printf("\t\tEnter ANY OTHER digit to exit\n");

    printf("\n\n\t  Enter your choice: ");
    scanf("%d", &n);
    printf("\n\n");
    if(n==1)
    {
        x++;
        add_Info();
    }
    else if(n==2)
        print_Info();

    else if(n==3)
        highest_Cgpa();
    else if(n==4)
        student_Details();
    else if(n==5)
        sort_Details();
    else if(n==6)
        delete_Details();
    else if(n==7)
        login();
        else if(n==8)
        change_Password(1);
        else if(n==9)
        update_Info();
    else
    {
        printf("Invalid input....");
        return 0;
    }
}

void student_Panel()
{
    system("COLOR 0A");
    printf("\t*************** STUDENT PANEL *******************\n\n\n");
    printf("\t\t\tMAIN MENU\n");
    printf("\t\t 1.Print Your Student Info\n");
    printf("\t\t 2.Change password\n");
    printf("\t\t 3.Go to Login Page.\n");
    system("COLOR 07");
    int n;
    printf("\n\n\t  Enter your choice: ");
    scanf("%d", &n);
    int id;
    if(n==1)
    {
        printf("Enter your Student ID: ");
        scanf("%d", id);
        printf("\n\t Name: %s\n\t ID: %d\n\t Department: %s\n\t CGPA: %0.2f\n", stu[id].name,stu[id].id,stu[id].dept,stu[id].cgpa);
    }
    else if(n==2)
    {
        change_Password(2);
        switch(verify)
            {
            case 1:
                admin_Panel();
            case 2:
                student_Panel();
            }
    }
    else if(n==3)
    {
        login();
    }
    else
    {
        printf("Invalid input....");
        return 0;
    }
}



void add_Info(c)
{
    printf("\tSTUDENT NO.%d\n \n", x);
    for(x;x<=80;x++)
    {
        system("COLOR 03");
        fflush(stdin);
        printf("\tEnter Name: ");
        gets(stu[x].name);
        printf("\n\tEnter ID: ");
        scanf("%d", &stu[x].id);
        fflush(stdin);
        printf("\n\tEnter Department: ");
        gets(stu[x].dept);
        printf("\n\tEnter CGPA: ");
        scanf("%f", &stu[x].cgpa);
        printf("\n\n\t....Press ENTER to add another info....\n\n");
        printf("\n\n\t....Enter ANY OTHER KEY to go to main menu....\n\n");
        fflush(stdin);
        char ch;
        scanf("%c", &ch);
        fflush(stdin);
        if(ch=='\n')
        {
            x++;
            add_Info();
        }
        else
        {
            break;
        }
    }
    switch(verify)
            {
            case 1:
                admin_Panel();
            case 2:
                student_Panel();
            }
}

void print_Info()
{
    printf("\n\n\t ...ALL STUDENT INFO...\n\n");
    for(int j=1;j<=x;j++)
    {
        printf("\n\n\tSerial no %d.\n",j);
        printf("\n\t Name: %s\n\t ID: %d\n\t Department: %s\n\t CGPA: %0.2f\n", stu[j].name,stu[j].id,stu[j].dept,stu[j].cgpa);
    }
    switch(verify)
            {
            case 1:
                admin_Panel();
            case 2:
                student_Panel();
            }
}


void highest_Cgpa()
{
    int max=0;
    for(int i=1;i<=80;i++)
   {
       if(stu[i].cgpa>stu[max].cgpa)
       {
           max=i;
       }
   }
   printf("\t\t....Highest CGPA....");
   printf("\n\t Name: %s\n\t ID: %d\n\t Department: %s\n\t CGPA: %0.2f\n", stu[max].name,stu[max].id,stu[max].dept,stu[max].cgpa);
   printf("\tPress enter to go to main menu...");
   char ch;
   fflush(stdin);
   scanf("%c", &ch);
        switch(verify)
            {
            case 1:
                admin_Panel();
            case 2:
                student_Panel();
            }
}

void student_Details()
{
    int student_id,search=0;
    char name[50];
    printf("\t 1.By Name.\n");
    printf("\t 2.By Student ID.\n");
    int n;
    printf("\tEnter your choice: ") ;
    scanf("%d", &n);

    ///Search By Name
    if(n==1)
    {
        printf("\n\tEnter name of the student: ");
        fflush(stdin);
        gets(name);
        for(int i=1;i<=80;i++)
        {
            int result=1;
            result=strcmp(name,stu[i].name);
           if(result==0)
           {
               printf("\n\n\t Name: %s\n\t ID: %d\n\t Department: %s\n\t CGPA: %0.2f\n", stu[i].name,stu[i].               id,stu[i].dept,stu[i].cgpa);
               break;
           }
        }
        printf(" \n\n\t....WE DIDN'T FIND ANY STUDENT WITH THIS NAME IN OUR DATABASE....\n\n");

    }

    ///Search By ID
    if(n==2)
    {
        printf("\n\tEnter student id to search: ") ;
   scanf("%d", &student_id);
   for(int i=1;i<=80;i++)
   {
       if(student_id==stu[i].id)
       {
           search=i;
           break;
       }
   }
   if(search==0)
       printf("\n\t\t....WE DIDN'T FIND THAT STUDENT ID IN OUR DATABASE....\n\n");
   else
        printf("\n\n\t Name: %s\n\t ID: %d\n\t Department: %s\n\t CGPA: %0.2f\n", stu[search].name,stu[search].id,stu[       search].dept,stu[search].cgpa);
   printf("\tPress ENTER to Search Again..\n");
   printf("\tEnter any other button for main menu..\n");
   char ch;
   fflush(stdin);
   scanf("%c", &ch);
    switch(ch=='\n')
        {
            case 1:
                student_Details();
        default :
            {
               switch(verify)
                {
                case 1:
                    admin_Panel();
                case 2:
                    student_Panel();
                }
            }

        }
    }
    switch(verify)
            {
            case 1:
                admin_Panel();
            case 2:
                student_Panel();
            }

}

void sort_Details()
{
    int max=1,temp;
    for(int i=0;i<=x;i++)
    {
        for(int j=i+1;j<=x;j++)
        {
            if(stu[j].id<stu[i].id)
            {
                temp=stu[i].id;
                stu[i].id=stu[j].id;
                stu[j].id=temp;
            }
        }
    }
    printf("Sorting Completed....");
    switch(verify)
            {
            case 1:
                admin_Panel();
            case 2:
                student_Panel();
            }
}

void delete_Details()
{
    int student_id,search=0;
    printf("\n\n\tEnter the Student ID to delete info: ");
    scanf("%d", &student_id);
   for(int i=1;i<=80;i++)
   {
       if(student_id==stu[i].id)
       {
           search=i;
           break;
       }
   }
   if(search==0)
       printf("\n\t\t....WE DIDN'T FIND THAT STUDENT ID IN OUR DATABASE....\n\n");
   else
        printf("\n\n\t Name: %s\n\t ID: %d\n\t Department: %s\n\t CGPA: %0.2f\n", stu[search].name,stu[search].id,stu[search].dept,stu[search].cgpa);

        printf("\n\t***********This action cannot be undone***********\n\n");
        printf("\n\t***********Press enter again to delete***********\n");
        printf("\n\t***********Enter any other key to cancel***********\n");
        char ch;
        fflush(stdin);
        scanf("%c", &ch);
        if(ch=='\n')
        {
            stu[search].name[0] = '\0';
            stu[search].dept[0] = '\0';
            stu[search].id=0;
            stu[search].cgpa=0 ;
            printf("\t\n\n********Deleted Successfully*********");
            admin_Panel();
        }
        else
        {
            printf("\t\n\n********Process canceled*********");
        }



        printf("\n\n\t Name: %s\n\t ID: %d\n\t Department: %s\n\t CGPA: %0.2f\n", stu[search].name,stu[search].id,stu[search].dept,stu[search].cgpa);

}

void change_Password(x)
{
    switch(x)
    {
    case 1:
        {
            fflush(stdin);
        printf("\tEnter new password: ");
        gets(admin_Password);
        printf("\t***PASSWORD CHANGED***");
        //puts(admin_Password);
        admin_Panel();
        break;
        }

    case 2:
        {
            fflush(stdin);
          printf("\n\tEnter new password: ");
        gets(student_Password);
        printf("\t***PASSWORD CHANGED***");
        //puts(student_Password);
        student_Panel();
        break;
        }

    }
}


void update_Info()
{
    int student_id,search=0;
    printf("\n\n\tEnter the Student ID you want to update: ");
    scanf("%d", &student_id);
   for(int i=1;i<=80;i++)
   {
       if(student_id==stu[i].id)
       {
           search=i;
           break;
       }
   }
   if(search==0)
       printf("\n\t\t....WE DIDN'T FIND THAT STUDENT ID IN OUR DATABASE....\n\n");
   else
   {
       fflush(stdin);
        printf("\tEnter Name: ");
        gets(stu[search].name);
        printf("\n\tEnter ID: ");
        scanf("%d", &stu[search].id);
        fflush(stdin);
        printf("\n\tEnter Department: ");
        gets(stu[search].dept);
        printf("\n\tEnter CGPA: ");
        scanf("%f", &stu[search].cgpa);
        printf("\n\n\t....Student info updated....\n\n");
   }

        printf("\t\t......Updated info......\n\n\n\t Name: %s\n\t ID: %d\n\t Department: %s\n\t CGPA: %0.2f\n", stu[search].name,stu[search].id,stu[search].dept,stu[search].cgpa);
        admin_Panel();
}







