
# include <stdio.h>
# include <string.h>
int main()
{
    char str[20];
    int i,len=0;

    printf("Enter ur name:");
    scanf("%s",&str);

    len=strlen(str);

    for(i=0;i<len;i++)
       printf("%c\n",str[i]);
 
    return 0;
}