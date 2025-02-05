# include <stdio.h>
int  main()
  {
      struct student
      {
          int id;
          char name[20];
          float avg;
      };

      struct student s1,s2;
      printf("No of bytes occupied:%d\n",sizeof(s1));

      printf("Enter Student id:");
      scanf("%d",&s1.id);
      printf("Enter Student Name:");
      scanf("%s",&s1.name);
      printf("Enter Student Average:");
      scanf("%f",&s1.avg);

       printf("Enter Student id:");
      scanf("%d",&s2.id);
      printf("Enter Student Name:");
      scanf("%s",&s2.name);
      printf("Enter Student Average:");
      scanf("%f",&s2.avg);

      printf("\nStudent id:%d",s1.id);
      printf("\nStudent name:%s",s1.name);
      printf("\nStudet Average:%f",s1.avg);

      printf("\nStudent id:%d",s2.id);
      printf("\nStudent name:%s",s2.name);
      printf("\nStudet Average:%f",s2.avg);



    return 0;
 }

