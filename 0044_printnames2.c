
# include <stdio.h>
# include <string.h>
int main()
{
   char name[20];
   int c,len;

   printf("Enter ur name:");
   scanf("%s",&name);

   len=strlen(name);

   for(c=1;c<=len;c++)
    printf("%d. %s\n",c,name);

    return 0;
}
