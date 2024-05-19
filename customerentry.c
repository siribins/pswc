#include <stdio.h>

char mobnum(char num[50])
{
    printf("Enter customer mobile number: ");
    gets(num);
    return *num;
}
