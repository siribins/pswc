#include <stdio.h>

struct Item
{
    char name[50];
    int quantity;
    float price;
};

void GenBill(char *name, int number, struct Item items[], int item_num)
{
    printf("\n");
    printf("**********************************************************\n");
    printf("Customer name: %s\n", name);
    printf("Customer number: %d\n", number);
    printf("**********************************************************\n");

    printf("NO\tITEM\t\tQUANTITY\tPRICE\tITEM TOTAL\n");
    float sum=0;
    for (int i = 0; i < item_num; i++)
    {  
        int k=i;
        float total=0;
        total=(items[i].quantity)*(items[i].price);
        printf("%d\t%s\t\t%d\t\t%.2f\t%.2f\n", k+1, items[i].name, items[i].quantity, items[i].price, total);
        sum+=total;
    }

    printf("**********************************************************\n");

    printf("Total: %.2f\t\t\t\t GST:8%%\n", sum);
    printf("Total with GST: %.2f\n", sum+(sum*0.08));

    printf("**********************************************************\n");

}
