
# include <stdio.h>
int main()
{
    char x,str[100];
    printf("Enter a character...:");
    x=getchar(); //scanf("%c",&x);
    putchar(x); //printf("%c",x);


    puts("\nEnter a string...");
    fflush(stdin);
    gets(str); //scanf("%^\n]",&str);
    puts(str); //printf("%s",str);

     return 0;

}
