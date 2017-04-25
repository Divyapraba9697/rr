#nclude<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
if((a>b)&&(a>c))
{
printf(" a is greater", b);
}
else if((b>c)&&(b>a))
{
printf("b is greater", c);
}
else
{
printf("c is greater", a);
}
getch();
}
