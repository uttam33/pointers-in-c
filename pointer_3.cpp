#include<stdio.h>
#include<conio.h>
void n(int);
void m(int);
int a=3;
int main()
{	printf("namste!\n");
	m(a);
	return 0;
	getch();
}
void m(int y)
{
	a=1;
	a=y-a;
	n(a);
	printf("%d\t",a);
}
void n(int x)
{
	x=x*a;
	printf("%d\t",x);
}
