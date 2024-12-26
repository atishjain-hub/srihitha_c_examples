// switchase case example

# include <stdio.h>
int main()
{
    int no=0;

    printf("Enter a no(1-9):");
    scanf("%d",&no);

    switch(no)
    {
        case 1: printf("One"); break;
        case 2: printf("Two"); break;
        case 3: printf("Three"); break;
        case 4: printf("Four"); break;
        default: printf("Invalid no");
    }

    return 0;
}
