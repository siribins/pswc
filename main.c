#include <stdio.h>
#include <stdlib.h>

struct Item
{
    char name[50];
    int quantity;
    float price;
};

 int main()
 {
    printf("LOGIN\n");
    
    char user[50];
    char password[50];

    username(user);
    pass(password);

    int item_num=0;
    struct Item *items = (struct Item* )malloc(100 * sizeof(struct Item));

    char customer_name[50];
    int customer_number=0;

    strcpy(customer_name, user);
    customer_number=mobnum(customer_number);

    int choice=0;
    while (choice!=3)
    {
        printf("\n1. Item Entry \n2. Generate Bill \n3. Quit\nSelect an option:");
        scanf("%d",&choice);
        printf("\n");

        switch (choice)
        {
            case 1:
                itemname(items[item_num].name);
                items[item_num].quantity=itemquantity(&items[item_num].quantity);
                items[item_num].price=itemprice(&items[item_num].price);
                item_num++;
                break;

            case 2: 
                GenBill(customer_name, customer_number, items, item_num);  
                break;

            case 3:
                printf("Thank you");
                break;
            default:
                printf("Invalid Entry");
        }
    }
    free(items);
    return 0;
 }
