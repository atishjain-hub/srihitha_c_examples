//Write a Program to count no of digits from the inputted no
//ex: 256 

# include <stdio.h>
int main()
{
    int no=0,digits=0;

    printf("Enter a no:");
    scanf("%d",&no);

    while(no!=0)
    {
        no=no/10;
        digits++;
    }

    printf("No of Digits are:%d",digits);
    
    return 0;
}