# include <stdio.h>
# define SIZE 10

void display(int*); //func declaration
int i; //global declaration
int  main()
  {
      int arr[SIZE];

      for(i=0;i<SIZE;i++)
      {
          printf("Enter %d no:",i+1);
          scanf("%d",&arr[i]);
      }

      display(&arr);

    return 0;
 }

 void display(int *p)
 {
     for(i=0;i<SIZE;i++)
     {
         printf("\n%u - %d",p,*p);
         p++;
     }
 }



