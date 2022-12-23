#include<stdio.h>
int main ()
{
	char name[100],address;
	int i;
printf ("enter name:");
scanf ("%s",&name);
printf ("enter ages:");
scanf ("%d" ,&i);
printf ("enter address:");
scanf ("%s",&address);
printf ("your name is:%s your age is:%d your address is:%s" ,&name,&i,&address);
return 0;
}
