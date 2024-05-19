#include <stdio.h>
#include <string.h>

char username(char name[50])
{
    printf("Enter username: ");
    gets(name);
    return *name;
}

int usecheck(char *userexist)
{
    FILE *fp=fopen("users.csv","r");
    char line[100];
    int check=500;
    int flag=500;
    while(!feof(fp))
    {
        fgets(line,500,fp);
        char *val;
        val=strtok(line,",");
        check=strcmp(userexist,val);
        if (check==0)
        {
            flag=1;
        }
        else 
        {
            continue;
        }
    }
    if(flag==1)
    {return 1;}
    else
    {return 0;}  
}

int passcheck(char *password, char *userforcsv)
{
    FILE *fp=fopen("users.csv","r");
    char line[100];
    int check=500;
    while(!feof(fp))
    {
        fgets(line,500,fp);
        char *val;
        char *passfromcsv;
        val=strtok(line,",");
        passfromcsv=strtok(NULL,",");
        check=strcmp(userforcsv,val);
        if (check==0)
        {
            int comp=500;
            password=strcat(password,"\n");
            comp= strcmp(password,passfromcsv);
            if (comp==0)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        else 
        {
            continue;
        }
    }   
}

void newuser(char *password, char *userforcsv)
{
    FILE *fp=fopen("users.csv","a");
    fprintf(fp,"%s,%s\n",userforcsv,password);

}

void pass(char *password, char nameofuser[50])
{
    username(nameofuser);

    int flagu=0;
    flagu=usecheck(nameofuser);

    if(flagu==1)
    {
        int flag=0;
        printf("Enter password:");
        gets(password);

        flag=passcheck(password,nameofuser);
        if  (flag==1)
        {  
            printf("You have succesfully logged in :) \n\n");
        }
        else
        {
            printf("Incorrect password. Try again :( \n");
            return pass(password,nameofuser);
        }
    }
    else
    {
        printf("NEW USER\n");
        char confirm[50];
        printf("Enter password:");
        gets(password);
        printf("Confirm password:");
        gets(confirm);
        int comp=strcmp(password,confirm); 
        if(comp==0)
        {
            newuser(password,nameofuser);
            printf("New user registered :)\n");
            printf("You have succesfully logged in :) \n\n");

        }
        else
        {
            printf("Passwords did not match :(\n");
            return pass(password,nameofuser);
        }
    }
}
