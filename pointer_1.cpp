#include<stdio.h>
#include<conio.h>
void f(int*,int*);
int a=10,b=20;
int main()
{
f(&a,&b);
printf("%d\n%d",a,b);
return 0;
getch();
}
void f(int*p,int*q)
{
p=q;
*p=25;
*q=50;

}
