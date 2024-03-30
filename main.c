#include <stdio.h>

int len=0;

 int main()
 {
    char mainname[50];
    int num=0;
    char email[50];
    cusname(mainname);
    mobnum(num);
    cusemail(email);

    int choice=0;
    printf("How many items? ");
    scanf("%d",&len);
    char name[len][50];
    int quantity[len];
    float price[len];

    while (choice!=3)
    {
        printf("\n1. Item Entry \n2. Generate Bill \n3. Quit(3)\nSelect an option:");
        scanf("%d",&choice);
        printf("\n");

        switch (choice)
        {
            case 1:
                for (int i=0; i<len; i++)
                {
                    itemname(name[i]);
                    itemquantity(&quantity[i]);
                    itemprice(&price[i]);
                }
                break;
            case 2: 
                printf("Customer name: %s\n",mainname);
                printf("Customer mobile number: %d\n",num);
                printf("Customer email: %s\n",email);
                GenBill(name, quantity, price, len);                
                break;
            case 3:
                printf("Thank you");
                break;
            default:
                printf("Invalid Entry");
                break;
        }
    }
 }