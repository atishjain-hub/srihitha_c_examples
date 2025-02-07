# include <stdio.h>
int main(int argc,char *argv[])
{
    if(argc>2)
    {
        printf("Too Many Arguments...");
        exit(0);
    }

    if(argc<2)
    {
        printf("Argument Missing...");
        exit(0);
    }

  printf("%s Welcome...",argv[1]);

}
