# include <stdio.h>
int  main()
  {
      struct student
      {
          int id;
          char name[20];
          float avg;
      };

      struct student s[100];
      int i,no_of_students;
      printf("No of bytes occupied:%d\n",sizeof(s));

      printf("How Many Students:");
      scanf("%d",&no_of_students);

      for(i=0;i<no_of_students;i++)
      {
        printf("Enter Student id:");
       scanf("%d",&s[i].id);
       printf("Enter Student Name:");
       scanf("%s",&s[i].name);
       printf("Enter Student Average:");
       scanf("%f",&s[i].avg);
      }


     for(i=0;i<no_of_students;i++)
     {
         printf("\n%d - %s - %f",s[i].id,s[i].name,s[i].avg);
     }
    return 0;
 }

