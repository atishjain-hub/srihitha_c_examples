# include <stdio.h>
int main()
{
    struct student
    {
        int rollno;
        char name[20];
        float avg;
    };

    struct student s;
    FILE *fp;

    char ch='y';

    fp=fopen("student.dat","ab");

    while(ch=='y')
    {
         printf("Enter Rollno:");
         scanf("%d",&s.rollno);
         printf("Enter Name:");
         scanf("%s",&s.name);
         printf("Enter Average:");
         scanf("%f",&s.avg);

         fwrite(&s,sizeof(s),1,fp);

         printf("Do you wish to add one more student(y/n):");
         fflush(stdin);
         ch=getchar();
    }


    return 0;
 }

