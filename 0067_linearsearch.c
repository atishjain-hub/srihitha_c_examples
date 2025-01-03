
# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# define S 10
int main()
{
    int arr[S],i,key,count=0;
    char found='n';
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

    printf("\nEnter a key no to search:");
    scanf("%d",&key);

    //linear search

    for(i=0;i<S;i++)
    {
        count++;
        if(arr[i]==key)
        {
            printf("%d is found at %d index with %d iterations...",key,i,count);
            found='y';
            break;
        }
    }

    if(found=='n')
       printf("%d is not Found...",key);
}
