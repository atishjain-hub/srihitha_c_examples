# include <stdio.h>
int main()
{
    int no,big,sbig,count;
    no=big=sbig=0;
    
    for(count=1;count<=10;count++)
    {
        printf("Enter a no:");
        scanf("%d",&no); //25 50 100 250 150 120 250

        if(no>big)
        {
            sbig=big; 
            big=no; 
        }
        else
            if(no>sbig && no!=big)
              sbig=no; 
    }

    printf("Second Biggest no is:%d",sbig);
    return 0;
}