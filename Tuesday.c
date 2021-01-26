#include<stdio.h>

int main()
{
	int a,b,c;
	a = 2;
	b = 4;
	c = (a+b);
	printf("show the value of a = 2\n ");
	printf("show the value of a = is %d\n",*&a);
    printf("show the value of b = 4\n ");
	printf("show the value of b is %d\n",*&b);
	printf("show the value of c is %d\n",(a+b));
	printf("show thw value of c is %d\n",*&c);
return 0;
 } 
