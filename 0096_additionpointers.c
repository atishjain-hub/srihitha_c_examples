# include <stdio.h>
int  main()
  {
    int a,b,res,*p1,*p2;
    a=b=res=0;

    p1=&a;
    p2=&b;

    printf("Enter 2 nos:");
    scanf("%d%d",&a,&b);

    res=*p1+*p2;

    printf("Result is:%d",res);
    return 0;
 }


