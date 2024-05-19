#include<stdio.h>
#include<string.h>

int pricefromcsv(char item[50])
{
    FILE *fp=fopen("prices.csv","r");
    char line[100];
    int check=0;
    int flag=0;
    int finalprice=0;
    while(!feof(fp))
    {
        fgets(line,500,fp);
        char *val;
        char *priceofitem;
        val=strtok(line,",");
        priceofitem=strtok(NULL,",");
        check=strcmp(item,val);
        if (check==0)
        {
            finalprice=atoi(priceofitem);
            flag=1;
            return finalprice;
        }
        else 
        {
            continue;
        }
    }
    if (flag!=1)
        {
            printf("Item not in inventory\n");
        }
}