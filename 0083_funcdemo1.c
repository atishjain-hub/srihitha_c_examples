# include <stdio.h>
void display(void); //fun decl
int main()
{
    printf("Welcome to Coding Career Academy\n");
    display(); //func call
    printf("Back to main");
    return 0;
}

void display(void) //func def
{
    printf("Welcome to C Programming\n");
    return ;
}