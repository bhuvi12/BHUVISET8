#include<stdoio.h>
#include<conio.h>
void main()
{
int a,b,c,i;
printf("\n enter the value of a and b");
scanf("%d"%d,&a,&b);
c=a*b;
for(i=0;i<c;i++)
{
if(c==(i*i))
{
printf("\n yes");
}
else
{
printf("\n no");
}
}
getch();
}
