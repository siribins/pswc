#include <stdio.h>
#include <stdlib.h>

void itemname(char iname[50])
{
    printf("Enter item name: ");
    scanf("%s", iname);
}

int itemquantity(int *quantity)
{
    printf("Enter quantity of item: ");
    scanf("%d", quantity);
    return *quantity;
}

int itemprice(float *price)
{
    printf("Enter price of item: ");
    scanf("%f", price);
    return *price;
}
