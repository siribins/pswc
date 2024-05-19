#include <stdio.h>

struct Item
{
    char name[50];
    int quantity;
    float price;
};

void GenBill(char *name, char *number, struct Item items[], int item_num)
{
    printf("\n");
    printf("**********************************************************\n");
    printf("Customer name: %s\n", name);
    printf("Customer number: %s\n", number);
    printf("**********************************************************\n");

    printf("ITEM\t\tQUANTITY\tPRICE\tITEM TOTAL\n");
    float sum=0;
    for (int i = 0; i < item_num; i++)
    {  
        if (items[i].price!=0)
        {
            int k=i;
            float total=0;
            total=(items[i].quantity)*(items[i].price);
            printf("%s\t\t%d\t\t%.2f\t%.2f\n", items[i].name, items[i].quantity, items[i].price, total);
            sum+=total;
        }
    }

    printf("**********************************************************\n");

    printf("Total: %.2f\t\t\t\t GST:8%%\n", sum);
    printf("Total with GST: %.2f\n", sum+(sum*0.08));

    printf("**********************************************************\n");

}
