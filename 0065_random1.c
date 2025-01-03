# include <stdio.h>
# include <stdlib.h>
# include <time.h>
int main()
{
    int i,x=0;

    srand(time(0));
    for(i=1;i<=10;i++)
    {
     x=rand()%100;
     printf("%d\n",x);
    }

    return 0;
}