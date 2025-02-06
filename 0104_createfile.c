# include <stdio.h>
int main()
{
    char fname[10],ch;
    FILE *fp;

    printf("Enter ur File Name(f6 - save):");
    scanf("%s",&fname);

    fp=fopen(fname,"rt");

    if(fp!=NULL)
    {
        printf("File is Already Existing...");
        exit(0);
    }

    fp=fopen(fname,"wt");

    while(1)
    {
        ch=getchar();
        if(ch!=EOF)
            putc(ch,fp); //writes data from ram to hdd
        else
            break;
    }

    printf("File is Saved...");


    return 0;
 }

