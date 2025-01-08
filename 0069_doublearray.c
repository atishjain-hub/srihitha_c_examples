# include <stdio.h>
# define R 5
# define C 5
int main()
{
    int r,c;
    int arr[R][C]={0};


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