# include <stdio.h>
int main()
{
    struct student
    {
        int rollno;
           float avg;
        char name[20];

    };

    struct student s;
    FILE *fp;

    fp=fopen("student.dat","rb");

    while(fread(&s,sizeof(s),1,fp)==1)
    {
        printf("\n%d - %s - %f",s.rollno,s.name,s.avg);
    }

    return 0;
 }

