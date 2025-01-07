
# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# define S 20
int main()
{
    int arr[S],i,j,temp,count=0;
    srand(time(0));
    for(i=0;i<S;i++)
    {
        arr[i]=rand()%100;
    }

    printf("Array Elements...");
    printf("\n--------------\n");
    for(i=0;i<S;i++)
    {
        printf("%d-->",arr[i]);
    }

//sorting logic

for(i=0;i<S;i++)
{
for(j=i+1;j<S;j++)
{
    count++;
    if(arr[i]>arr[j])
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}
}

printf("\n\nArray Elements...");
    printf("\n--------------\n");
    for(i=0;i<S;i++)
    {
        printf("%d-->",arr[i]);
    }

printf("\nno of iterations:%d",count);
   return 0;
}
