#include<stdio.h>
main()
{
	 int a=5;
	 int b=20;
	 int c;
	 if (a&&b)
	 {
	 	printf("line 1-condition is true\n");
	 }
	 if (a||b)
	 {
	 printf("line 2-condition is true\n");
     }
      a=0;
      b=10;
      if(a&&b)
      {
	  printf("line 3-conditon is true\n");
     }
     if(!(a||b))
     {
	 printf("line 4-cindition is true\n");
     }
     return 0;
}
