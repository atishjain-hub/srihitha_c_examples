//write a program to read a character and check whether it is vowel or consonent

# include <stdio.h>
int main()
{
    char ch;

    printf("Enter a character...:");
    scanf("%c",&ch);

    if( (ch>=65 && ch<=90) ||(ch>=97 && ch<=122))
    {
     if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
       printf("%c is a Lowercase Vowel..",ch);
     else
        if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            printf("%c is a Uppercase Vowel..",ch);
        else
            printf("%c is a Consonent...",ch);
    }
    else
        if(ch>=48 && ch<=57)
          printf("%c is a Digit...pls input alphabets only",ch);
        else
          printf("%c is a Symbol..pls input alphabets only",ch);
          
    return 0;
}