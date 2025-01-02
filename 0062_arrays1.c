
# include <stdio.h>
# define SIZE 10
int main()
{
    int arr[SIZE];
    int i;

for(i=0;i<SIZE;i++)
{
    printf("Enter %d no:",i+1);
    scanf("%d",&arr[i]);
}

  for(i=0;i<SIZE;i++)
    printf("%d - %d\n",i,arr[i]);

   printf("\n");  

  
    return 0;
}