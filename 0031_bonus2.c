//program to check the eligibility of the bonus

# include <stdio.h>
int main()
{
    char ms,gen;
    int age=0;

    printf("Enter ur Marital Status(M/U):");
    scanf("%c",&ms);
    printf("Enter ur Gender(M/F):");
    fflush(stdin);
    scanf("%c",&gen);
    printf("Enter ur Age:");
    scanf("%d",&age);

    if( (ms=='m' || ms=='M') || ((gen=='M' || gen=='m') && age>=30) || ((gen=='f' || gen=='F') && age>=25))
      printf("Eligible for Bonus...");
    else
      printf("Not Eligible for Bonus...");
      
    return 0;
}