#include<stdio.h>
#include<conio.h>
void main()
{
char str[20]="abcdef";
printf("%s\n",str);
str[3]=97;
printf("%s\n",str);
str[3]=0;
printf("%s\n",str);
str[3]='0';
printf("%s\n",str);
printf("%s\n",str+3);
printf("%c\n\"",str+3);
}
