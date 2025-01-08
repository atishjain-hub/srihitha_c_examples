# include <stdio.h>
# define R 3
# define C 3
int main()
{
    int r,c;
    int arr[R][C];


    for(r=0;r<R;r++)
    {
        for(c=0;c<C;c++)
        {
            printf("Enter an element at (%d,%d):",r,c);
            scanf("%d",&arr[r][c]);
        }
    }


for(r=0;r<R;r++)
{
    for (c=0;c<C;c++)
    {
      printf("%d\t",arr[r][c]);
    }
    printf("\n");
}    

    return 0;
}