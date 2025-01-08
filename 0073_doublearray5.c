# include <stdio.h>
# define R 3
# define C 3
int main()
{
    int r,c;
    int a[R][C],b[R][C],res[R][C];

    printf("Entner First Array Elements:");
    printf("\n--------------------------\n");
    for(r=0;r<R;r++)
    {
        for(c=0;c<C;c++)
        {
            scanf("%d",&a[r][c]);
        }
    }

    printf("\nEntner Second Array Elements:");
    printf("\n----------------------------\n");
    for(r=0;r<R;r++)
    {
        for(c=0;c<C;c++)
        {
            scanf("%d",&b[r][c]);
        }
    }

//add the array
for(r=0;r<R;r++)
{
    for(c=0;c<C;c++)
    {
        res[r][c]=a[r][c]+b[r][c];
    }
}

printf("\nResult Array:");
printf("\n-------------\n");

for(r=0;r<R;r++)
{
    for (c=0;c<C;c++)
    {
      printf("%d\t",res[r][c]);
    }
    printf("\n");
}    

    return 0;
}