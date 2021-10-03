#include<stdio.h>
#include<conio.h>
void f(int*,int*);
int a=10,b=20;
void main()
{
f(&a,&b);
printf("%d\n%d",a,b);
}
void f(int*p,int*q)
{
p=q;
*p=25;
*q=50;
getch();
}
