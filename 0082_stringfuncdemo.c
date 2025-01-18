# include <stdio.h>
# include <string.h>

int main()
{
    char str[]="rajesh";
    char str1[]="SUNIL";

    printf("%d\n",strlen(str));
    printf("%s\n",strupr(str));
    printf("%s\n",strlwr(str1));
    printf("%s\n",strrev(str));

    return 0;
}