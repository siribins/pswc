#include <stdio.h>
#include <string.h>

void pass(char *password)
{
    printf("password is \"password\"\n");
    printf("Enter password:");
    gets(password);
    char PASSWORD[50]="password";
    int comp;
    comp= strcmp(password,PASSWORD);
    if  (comp!=0)
    {  
        printf("Incorrect password. Try again :( \n");
        return pass(password);
    }
    else
    {
        printf("You have succesfully logged in :) \n\n");
    }
}

char username(char name[50])
{
    printf("Enter username: ");
    gets(name);
    return *name;
}