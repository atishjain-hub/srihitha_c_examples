# include <stdio.h>
# include <stdlib.h>
int main()
{
    int no,temp,f=1;

    printf("Enter a no:");
    scanf("%d",&no);

    temp=no;

    if(no<0)
    {
        printf("Invalid Input");
        exit(0);
    }

    if(no==0)
    {
        printf("Factorial of 0 is 1");
    }

    while(no>=1)
    {
        f=f*no;
        no--;
    }
    no=temp;

    printf("Factorail of %d is %d",no,f);
    return 0;
}