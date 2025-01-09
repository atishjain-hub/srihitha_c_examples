
# include <stdio.h>
# include <string.h>
int main()
{
    char str[20];
    int i,len;

    printf("Enter ur name:");
    scanf("%s",&str);

    len=strlen(str);

    for(len=len-1;len>=0;len--)
       printf("%c",str[len]);
 
    return 0;
}