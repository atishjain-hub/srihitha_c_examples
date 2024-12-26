# include <stdio.h>
int main()
{
    int no1,no2,res,opt;
    no1=no2=res=opt=0;

    printf("Main - Menu");
    printf("\n------------");
    printf("\n1.Addition");
    printf("\n2.Subtraction");
    printf("\n3.Multiplication");
    printf("\n4.Division");
    printf("\n5.Exit");

    printf("\n\nEnter a no:");
    scanf("%d",&no1);

    printf("Enter another no:");
    scanf("%d",&no2);

    printf("\nEnter ur choice(1-5):");
    scanf("%d",&opt);

    switch(opt)
    {
        case 1: res=no1+no2; break;
        case 2: res=no1-no2; break;
        case 3: res=no1*no2; break;
        case 4: res=no1/no2; break;
        case 5: exit(0);
        default: printf("Invalid option...");
    }

    printf("Result is:%d",res);

    return 0;
}
