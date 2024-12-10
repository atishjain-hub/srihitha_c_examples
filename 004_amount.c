// Program to calculate amount for the inputted Rate & Qty
// Note: Rate should be in decimals
# include <stdio.h>
int main()
{
    int qty;
    float rate,amount;

    qty=rate=amount=0;

    printf("Enter Quantity:");
    scanf("%d",&qty);

    printf("Enter Rate:");
    scanf("%f",&rate);

    amount = rate * qty;

    printf("The Amount to be Paid is: Rs %.2f /-",amount);

    return 0;
}
