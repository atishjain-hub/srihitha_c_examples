
# include <stdio.h>
# include <string.h>
int main()
{
    char str[20];
    int i;

    printf("Enter ur name:");
    scanf("%s",&str);

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>=65 && str[i]<=90)
          putchar(str[i]+32);
        else
            if(str[i]>=97 && str[i]<=122)
              putchar(str[i]-32);
            else
                putchar(str[i]);    
    }

    
 
    return 0;
}