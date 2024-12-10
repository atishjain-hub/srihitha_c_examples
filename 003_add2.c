//Program to add 2 nos

# include <stdio.h>
int main()
{
    int no1,no2,res;
    no1=0;
    no2=0;
    res=0;

    printf("Enter First no:");
    scanf("%d",&no1);

    printf("Enter Second no:");
    scanf("%d",&no2);

    res = no1 + no2;

    printf("The Result is:%d",res);
    printf("\n%d + %d = %d",no1,no2,res);

    return 0;
}
