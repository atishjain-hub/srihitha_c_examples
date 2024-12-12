# include <stdio.h>
int main()
{
    char c;

    printf("Enter a character in uppercase(A-Z):");
    scanf("%c",&c);

    c=c+32;
    printf("Lowercase Character is:%c",c);
}