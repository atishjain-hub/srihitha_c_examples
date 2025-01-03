
# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# define S 10
int main()
{
    int arr[S],i;


    srand(time(0));
    for(i=0;i<S;i++)
    {
        arr[i]=rand()%100;
    }

    for(i=0;i<S;i++)
    {
        printf("%d - %d\n",i,arr[i]);
    }
}
