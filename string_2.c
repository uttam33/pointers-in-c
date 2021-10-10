#include<stdio.h>
#include<conio.h>
void main()
{
char mess[6][30]={"koi bhi lakshaya",
"bada nahi",
"jeeta wahi",
"jo dara nahi",
"hara wahi",
"jo lada nahi"
};
printf("%s\n",mess+3);
printf("%c\n",*(*(mess+2)+3));
printf("%s\n",*(mess+4));
getch();
}
