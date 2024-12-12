//Program to read the name of a person and display the same

# include <stdio.h>
int main()
{
    char name[20];

    printf("Heyy Enter ur Name:");
    scanf("%[^\n]",&name);

    printf("Heyyy %s Good Day !",name);

    return 0;
}