# include <stdio.h>
int big(int,int);
int main()
{
    int a,b;
    a=b=0;

    printf("Enter 2 nos:");
    scanf("%d%d",&a,&b);

    printf("Biggest no is:%d",big(a,b));

    return 0;
}

int big(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}
