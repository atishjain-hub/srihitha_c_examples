//Write a Program to find biggest of 10 numbers

# include <stdio.h>
int main()
{
    int count,no,big;
    count=no=big=0;

    for(count=1;count<=10;count++)
    {
        printf("Enter a no:");
        scanf("%d",&no);

        if(no>big)
           big=no;
    }

    printf("\nBiggest no is:%d",big);
    return 0;
}
