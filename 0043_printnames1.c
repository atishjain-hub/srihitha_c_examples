
# include <stdio.h>
int main()
{
   char name[20];
   int target,c=1;

   printf("Enter ur name:");
   scanf("%s",&name);

   printf("How many times do you want to print:");
   scanf("%d",&target);

   while(c<=target)
   {
       printf("%d - %s\n",c,name);
       c++;
   }

    return 0;
}
