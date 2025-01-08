# include <stdio.h>
# define R 3
# define C 3
int main()
{
    int r,c;
    int arr[R][C]={
                    {12,34,56},
                    {23,5,78},
                    {56,43,67}
                    };


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