#include<stdio.h>
void func (void);
static int count=100000000;
main()
{
    while (count--)
	{
		func();
	}
	return 0;
}
   void func (void)
   {
      static int a=0;
      a++;
      printf("%d",a, count);
      
	  }
