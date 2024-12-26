# include <stdio.h>
# include <ctype.h>
int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);

    ch=tolower(ch);

    //switch case fall through
    switch(ch)
    {
     case 'a':
     case 'e':
     case 'i':
     case 'o':
     case 'u': printf("Vowel..."); break;
     default: printf("Consonent...");
    }
}
