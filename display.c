#include<stdio.h>
#include<string.h>

void display()
{
    FILE *fp=fopen("prices.csv","r");
    char line[500];
    if(fp==NULL)
    {
        printf("error in opening the file\n");
    }
    else
    {
        while(!feof(fp))
        {
            fgets(line,500,fp);
            char *item;
            item=strtok(line,",");
            printf("%s\n",item);
        }
    }
}