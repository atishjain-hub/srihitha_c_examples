//program to voting eligibility

# include <stdio.h>
int main()
{
    int age=0;

    printf("Enter ur age:");
    scanf("%d",&age);

    if(age>=21)
    {
        printf("Ur Eligible...");
    }

    printf("\nThank You!");

    return 0;
}