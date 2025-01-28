//Global Declarations
int i;

//Function Declarations
int wcount(char[]);
void strev(char[]);


//Function Definitions
int wcount(char str[])
{
    int w=1;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
            w++;
    }
    return w;
}

void strev(char x[])
{
    int len;
    len=strlen(x);
    len--;
    while(len>=0)
    {
        putchar(x[len]);
        len--;
    }
}
