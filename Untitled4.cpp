#include<stdio.h>
void func (void);
static int count=5;
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
      static int i=6;
      i++;
      printf("i %d and count is %d \n",i, count);
      
	  }
