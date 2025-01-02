
# include <stdio.h>
# define SIZE 10
int main()
{
    int arr[SIZE];
    int i,sum=0;

for(i=0;i<SIZE;i++)
{
    printf("Enter %d no:",i+1);
    scanf("%d",&arr[i]);
}

  for(i=0;i<SIZE;i++)
  {
    sum=sum+arr[i];
  }

  for(i=0;i<SIZE;i++)
  {

    if(i<SIZE-1)
      printf("%d+",arr[i]);
    else
      printf("%d=",arr[i]);
  }
  printf("%d",sum);



   printf("\n");  

  
    return 0;
}