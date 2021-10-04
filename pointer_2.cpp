#include<stdio.h>
#include<conio.h>
void p(int*);
void q(int);
int x;
int main()
{
	x=5;
	p(&x);
	printf("%d\t",x);
	return 0;
	getch();
}
void p(int*y)
{
	int x=*y+2;
	q(x);
	*y=x-1;
	printf("%d\t",x);
}
void q(int z)
{
	z=z+x;
	printf("%d\t",z);
}
