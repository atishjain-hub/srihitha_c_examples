# include <stdio.h>
int  main()
  {
    int x=10;
    int *y=&x;

    printf("\nx is:%d",x);
    printf("\nAddress of x is:%u",&x);
    printf("\nvlaue of y:%u",y);
    printf("\nValue at the address of y:%d",*y);
    return 0;
 }


