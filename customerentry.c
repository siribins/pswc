#include <stdio.h>

char cusname(char name[50])
{
    printf("Enter customer name: ");
    gets(name);
    return *name;
}

int mobnum(int num)
{
    printf("Enter customer mobile number: ");
    scanf("%d",&num);
    return num;
}

char cusemail(char email[50])
{
    printf("Enter customer email: ");
    scanf("%s",email);
    return *email;
}