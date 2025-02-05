# include <stdio.h>
int main()
{
 union student
      {
          int id;
          long long mno;
          float avg;
      };

      union student s1;
      printf("%d",sizeof(s1));

      return 0;
 }

