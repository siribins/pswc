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

    pass(password,user);

    int item_num=0;
    struct Item *items = (struct Item* )malloc(100 * sizeof(struct Item));

    char customer_name[50];
    char customer_number[15];

    strcpy(customer_name, user);
    mobnum(customer_number);

    int choice=0;
    while (choice!=4)
    {
        printf("\n1. Item Entry \n2. Generate Bill \n3. Display inventory \n4. Quit\nSelect an option:");
        scanf("%d",&choice);
        printf("\n");

        switch (choice)
        {
            case 1:
                itemname(items[item_num].name);
                items[item_num].quantity=itemquantity(&items[item_num].quantity);
                items[item_num].price=pricefromcsv(items[item_num].name);
                item_num++;
                break;

            case 2: 
                GenBill(customer_name, customer_number, items, item_num);  
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Thank you");
                break;

            default:
                printf("Invalid Entry");
                break;
        }
    }
    free(items);
    return 0;
 }
