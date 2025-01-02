
//fill the array with multiples of 5
# include <stdio.h>
int main()
{
    int size;
    int i,m=5;

    printf("Enter ur array size:");
    scanf("%d",&size);

    int arr[size];

    for(i=0;i<size;i++)
    {
        arr[i]=m;
        m+=5; //m=m+5
    }

    for(i=0;i<size;i++)
      printf("%d - %d\n",i,arr[i]);

    return 0;
}