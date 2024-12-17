//program to work with if with else

# include <stdio.h>
int main()
{
    float avg=0;

    printf("Enter ur Average Marks:");
    scanf("%f",&avg);

    if(avg>=50)
    {
        printf("Ur Passed....");
        printf("\nCongrats....");
    }
    else
    {
        printf("Ur Failed...");
        printf("\nBetterluck next time...");
    }

    printf("\nThank you!");
    return 0;
}