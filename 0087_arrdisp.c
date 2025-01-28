# include <stdio.h>
void disparr(int[]);
int i; //global declaration
int main()
{
    int arr[10];

    for(i=0;i<10;i++)
    {
        printf("Enter %d no:",i+1);
        scanf("%d",&arr[i]);
    }

    disparr(arr);

    return 0;
}


void disparr(int x[])
{
    for(i=0;i<10;i++)
    {
        printf("\n%d - %d",i,x[i]);
    }
}

