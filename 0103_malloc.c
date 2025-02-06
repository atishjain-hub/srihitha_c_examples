# include <stdio.h>
int main()
{
    int n,i,*p;

    printf("Enter how many data items you want to store:");
    scanf("%d",&n);

    p=(int *)malloc(n*sizeof(n));

    for(i=0;i<n;i++)
    {
        printf("Enter a no:");
        scanf("%d",p+i);
    }

     for(i=0;i<n;i++)
    {
        printf("\n%u - %d",p+i,*(p+i));
    }

    free(p);


    return 0;
 }

