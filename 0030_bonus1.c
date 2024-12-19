//program to check the eligibility of the bonus

# include <stdio.h>
# include <stdlib.h>
int main()
{
    char ms,gen;
    int age=0;

    printf("Enter ur Marital Status(M/U):");
    scanf("%c",&ms);

    if(ms=='m' || ms=='M')
      printf("Eligible for Bonus...");
    else
         if(ms=='u' || ms=='U')
           {
            printf("Enter ur Gender(M/F):");
            fflush(stdin);
            scanf("%c",&gen);

            if(gen=='M' || gen=='m')
              {
                printf("Enter ur Age:");
                scanf("%d",&age);
                if(age<0 || age>200)
                  {
                    printf("Invalid Age...");
                    exit(0);
                  }

                if(age>=30)
                   printf("Eligible for Bonus...");
                else
                   printf("Not Eligible for Bonus...");
               }
            else
                if(gen=='f' || gen=='F')
                  {
                    printf("Enter ur Age:");
                    scanf("%d",&age);
                    if(age<0 || age>200)
                    {
                     printf("Invalid Age...");
                     exit(0);
                    }

                    if(age>=25)
                        printf("Eligible for Bonus...");
                    else
                        printf("Not Eligible for Bonus...");

                  } 
                else
                   printf("Invalid Gender");  
              }
         else
            printf("Invalid Marital status...");  
    return 0;
}