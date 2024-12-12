//Program to Read a gender and display the same

# include <stdio.h>
int main()
{
    char gender;
    printf("Enter Ur Gender([M]ale/[F]emale):");
    scanf("%c",&gender);

    printf("Gender is:%c",gender);
    
    return 0;
}