# include <stdio.h>
 struct student
      {
          int id;
          char name[20];
          float avg;
      };

      struct student s[100];
      typedef struct student stud;

      void display(stud*); //func declaration

      int i,no_of_students;

int  main()
  {

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

      display(&s); //function call

    return 0;
 }

 //function definition
void display(stud *s)
{
     for(i=0;i<no_of_students;i++)
     {
         printf("\n%u - %d - %s - %f",s,s->id,s->name,s->avg);
         s++;
     }
}
