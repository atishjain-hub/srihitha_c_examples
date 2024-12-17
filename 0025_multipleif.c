//program to demonstrate multiple if's

# include <stdio.h>
# include <stdlib.h>
int main()
{
    float avg;

    printf("Enter Average Marks:");
    scanf("%f",&avg);

    if(!(avg>0 && avg<=100))
    {
        printf("Invalid Input...");
        exit(0); //terminates the program
    }

    if(avg>=60)
      printf("First class...");
    else
        if(avg>=50)
            printf("Second class...");
        else
            if(avg>=40)
               printf("Third class....");
            else
               printf("Failed...");
    return 0;    
}