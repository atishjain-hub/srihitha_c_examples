# include <stdio.h>
# include "mystr.h"

int main()
{
    char str[]="Welcome to C Programming";

    printf("No of Words are:%d",wcount(str));
    printf("\nReverse of the String is:");
    strev(str);

    return 0;
}


