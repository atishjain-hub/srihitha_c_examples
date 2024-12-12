//size of demo

# include <stdio.h>
int main()
{
    int rollno=101;
    char gender='M';
    double avg=99.99;

    printf("\nno of bytes occupied by rollno variable is:%d",sizeof(rollno));
    printf("\nno of bytes reserved by int datatype is:%d",sizeof(int));

    printf("\nno of bytes occupied by gender variable is:%d",sizeof(gender));
    printf("\nno of bytes reserved by char datatype is:%d",sizeof(char));

    printf("\nno of bytes occupied by avg variable is:%d",sizeof(avg));
    printf("\nno of bytes reserved by double datatype is:%d",sizeof(double));

}