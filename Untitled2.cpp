#include<stdio.h>
int main ()
{
	double a,b,c,sum,difference,product,quotient;
	printf("enter a:");
	scanf("%f",&a);
	printf("enter b:");
	scanf("%f",&b);
	sum=a+b;
	difference=a-b;
	product=a*b;
	quotient=a/b;
	printf("nthe sum is:%f",sum);
	printf("\nthe difference is :%f",difference);
	printf("\nthe product is:%d",product);
    printf("\nthe quotient is:%f",quotient);
	return 0;	
}
