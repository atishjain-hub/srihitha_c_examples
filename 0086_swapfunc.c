# include <stdio.h>
void swap(int,int);
int main()
{
    int a,b;
    a=b=0;

    printf("Enter a value for A:");
    scanf("%d",&a);

    printf("Enter a value for B:");
    scanf("%d",&b);

    swap(a,b);  //calling the function by passing the values --> call by value

    printf("\nA is:%d",a);
    printf("\nB is:%d",b);
    return 0;
}

void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    return;
}
