# include <stdio.h>

int  main()
 {
    display();
    display();
    display();

    return 0;
 }

 display()
 {
     static  int x;
     printf("\n%d",x++);
 }
