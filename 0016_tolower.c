# include <stdio.h>
# include <ctype.h>

int main()
{
    char ch;

    printf("Enter a character in Uppercase:");
    scanf("%c",&ch);

    ch=tolower(ch);

    printf("The character is:%c",ch);
    return 0;
}