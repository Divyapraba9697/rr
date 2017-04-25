#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
char a;
scanf("%c",&a);
if(((a>='a')&&(a<='z'))||((a>='A')&&(a<='Z')))
{
printf(" a is alphabet");
}
else
{
printf("a is not an alphabet");
}
getch();

}
