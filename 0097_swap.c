# include <stdio.h>
int  main()
  {
    void swap(int*,int*);

    int a,b;
    a=10;
    b=20;
    printf("\nValues of A and B before calling swap() Function");
    printf("\nA=%d",a);
    printf("\nB=%d",b);

    swap(&a,&b);

    printf("\nValues of A and B After calling swap() Function");
    printf("\nA=%d",a);
    printf("\nB=%d",b);

    return 0;
 }

 void swap(int *x,int *y)
 {
     int temp;
     temp=*x;
     *x=*y;
     *y=temp;
 }

