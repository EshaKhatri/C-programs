#include<stdio.h>
#include<conio.h>
void main()
{
int n,i;
printf("Enter a number:\n");
scanf("%d",&n);
for(i=0;i<=100;i++)
printf("%d x %d=%d\n",n,i,(n*i));
getch();
}
