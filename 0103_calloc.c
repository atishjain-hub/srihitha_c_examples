# include <stdio.h>
int main()
{
    int n,i,*p,*q;

    p=(int *)calloc(5,4);

    for(i=0;i<5;i++)
    {
        printf("\n%u - %d",p+i,*(p+i));
    }

    q=realloc(p,8);
    printf("\n--------------------\n");

      for(i=0;i<8;i++)
    {
        printf("\n%u - %d",q+i,*(q+i));
    }

    free(p);
    free(q);


    return 0;
 }

