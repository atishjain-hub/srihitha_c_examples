
# include <stdio.h>
int main()
{
    int c,no,sum=0;
    c=1;

  while(c<=10)
  {
    printf("Enter %d no:",c);
    scanf("%d",&no);

    sum=sum+no;

    c++;
   }

   printf("\nSum of 10 numbers:%d",sum);

    return 0;
}
