# include <stdio.h>
int sum(int,int); //func decl
int main()
{
    int a,b,c;
    a=b=c=0;

    printf("Enter first no:");
    scanf("%d",&a);

    printf("Enter second no:");
    scanf("%d",&b);

    c=sum(a,b); //func call or func invocation

    printf("The Result is:%d",c);

    return 0;
}

int sum(int x,int y)
{
    int res=0;
    res=x+y;
    return(res);
}
