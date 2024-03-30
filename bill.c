#include <stdio.h>

void GenBill(char name[][50], int quantity[], float price[], int len)
{
    printf("NO  ITEM    QUANTITY    PRICE   TOTAL\n");
    for (int i = 0; i < len; i++)
    {
        printf("%d   %s     %d          %.2f     %.2f\n", i+1, name[i], quantity[i], price[i], (quantity[i] * price[i]));
    }
}
