//program to convert asii code to character

# include <stdio.h>
int main()
{
    int x;

    printf("Enter ASCII Code(0-255):");
    scanf("%d",&x);

    printf("ASCII Value for %d is %c",x,x);
    return 0;
}