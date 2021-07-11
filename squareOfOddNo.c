#include<stdio.h>
int main()
{
int n,i,sum=0;
printf("Enter the number of odd numbers you wish to print: \n ");
scanf("%d",&n);
for(i=1;i<=(n*2);i++)
{
if(i%2!=0)
{
sum=sum+(i*i);
}
}
printf("The sum of squares of first %d odd numbers = %d",n,sum);
return 0 ;
}






