# include <stdio.h>
int main()
{
    int no,sum=0;

do{
    printf("Enter a no:");
    scanf("%d",&no);

    if(no>0)
      sum=sum+no;

}while(no!=0);

printf("Sum is:%d",sum);

return 0;
}