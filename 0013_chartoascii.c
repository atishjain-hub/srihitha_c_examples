//Program to read a character and display its ASCII value

# include <stdio.h>
int main()
{
    char x;

    printf("Enter a character:");
    scanf("%c",&x);

    printf("ASCII Code for %c is %d",x,x);

    return 0;
}