# include <stdio.h>
# include <math.h>
int main()
{
    int no,d=2,count=0;
    char isprime='y';

    printf("Enter a no:");
    scanf("%d",&no);

    while(d<=sqrt(no))
    {
        count++;
        if(no%d==0)
        {
          isprime='n';   
          break;
        }
        d++;  
    }

    if(isprime=='y')
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