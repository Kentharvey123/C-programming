#include<stdio.h>
main()
{
	  int a=21;
	  int b=22;
	  int c;
	  
	  c=a+b;
	  printf("value of c-%d" ,c);
	  c=a/b;
	  printf("\nvalue of c=%d" ,c);
	  c=a*b;
	  printf("\nvalue of c=%d" ,c);
	  c=c=a++;
	  printf("\nvalue of c=%d" ,c);
	  c=c=a--;
	  printf("\nvalue of c=%d" ,c);
	  return 0;
	  
}
