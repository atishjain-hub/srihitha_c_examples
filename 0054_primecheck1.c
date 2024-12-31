# include <stdio.h>
int main()
{
    int no,d=2,count=0;

    printf("Enter a no:");
    scanf("%d",&no);

    while(d<no)
    {
        count++;
        if(no%d==0)
        {
          break;
        }
        d++;  
    }

    if(d==no)
    {
      printf("%d is Prime...",no);
      printf("\nNo of Iterations are:%d",count);
    }
    else
    {
      printf("%d is not Prime...",no);
      printf("\nNo of Iterations are:%d",count);
    }


    return 0;
}