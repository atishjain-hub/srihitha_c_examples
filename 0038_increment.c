# include <stdio.h>
int main()
{
    int a=10;

    printf("%d",a);
    printf("\n%d",a++); //post increment
    printf("\n%d",++a); //pre increment - 12
    a+=2; //14
    printf("\n%d",a);

    a-=5;
    printf("\n%d",a);
    printf("\n%d",a--);
    printf("\n%d",--a);

    return 0;
}
