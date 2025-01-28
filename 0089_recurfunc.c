# include <stdio.h>

int main()
{
    display(1);

    return 0;
}

display(int x)
{
    if(x>100)
        return;
    else
    {
        printf("\t%d",x);
        x++;
        display(x); //recursion
    }


}

