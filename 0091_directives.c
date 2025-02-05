# include <stdio.h>
# define N 0
int  main()
  {
   char str[20];
   int i;

    printf("Enter a string..:");
    gets(str);

    for(i=0;str[i]!=N;i++)
     {
      printf("\n%c",str[i]);
     }
return 0;
    }

