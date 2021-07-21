
#include<stdio.h>
#include<conio.h>
int convert(int hrs, int minutes);
int main()
{
int hrs, minutes, total_mins;
printf("Enter hours and minutes:");
scanf("%d%d",&hrs,&minutes);
total_mins=convert(hrs,minutes);
printf("\nTotal minutes=%d",total_mins);
getch();
return 0;
}
int convert(int hrs,int mins)
{
mins=hrs*60+mins;
return mins;
}
