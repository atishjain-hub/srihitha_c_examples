
//program to find area of a circle

# include <stdio.h>
int main()
{
    float area,radius;
    const float PI=3.141;

    printf("Enter Radius:");
    scanf("%f",&radius);

    area = PI * radius * radius;

    printf("Are of Circle is:%f",area);

    return 0;
}