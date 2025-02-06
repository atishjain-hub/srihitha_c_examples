# include <stdio.h>
int main()
{
    char fname[10],ch;
    FILE *fp;

    printf("Enter ur File Name:");
    scanf("%s",&fname);

    fp=fopen(fname,"rt");

    if(fp==NULL)
    {
        printf("File is not Existing...");
        exit(0);
    }

    while(1)
    {
        ch=getc(fp);
        if(ch!=EOF)
            putchar(ch); //writes data from hdd to console
        else
            break;
    }

    return 0;
 }

