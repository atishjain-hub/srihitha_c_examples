
/*
5 * 1 = 5
5 * 2 = 10
5 * 3 = 15
*/
# include <stdio.h>
int main()
{
    int tno,c,res;

    printf("Enter Math Table no to print...:");
    scanf("%d",&tno);

    for(c=1;c<=12;c++)
    {
        res=tno*c;
        printf("%d * %d = %d\n",tno,c,res);
    }

    return 0;
}
