#include<stdio.h>
int main()
{
struct student
{
char roll_numb[100];
char name[100],sec[30],dept[50];
int result,fee;
}
stud1,stud2;
printf("\n Enter the details of student 1:");
printf("\n name:");
scanf("%s",stud1.name);
printf("\n section:");
scanf("%s",stud1.sec);
printf("\n roll number:");
scanf("%s",&stud1.roll_numb);
printf("\n department:");
scanf("%s",&stud1.dept);
printf("\n fee:");
scanf("%d",&stud1.fee);
printf("\n result:");
scanf("%d",&stud1.result);
printf("\n Enter the details of student 2:");
printf("\n name:");
scanf("%s",stud2.name);
printf("\n section:");
scanf("%s",stud2.sec);
printf("\n roll number:");
scanf("%s",&stud2.roll_numb);
printf("\n department:");
scanf("%s",&stud2.dept);
printf("\n fee:");
scanf("%d",&stud2.fee);
printf("\n result:");
scanf("%d",&stud2.result);
if(stud1.result>=stud2.result)
{
printf("\n student 1 got the highest marks \n the details of the student is as follows: \n name:%s\n section:%s\n roll number:%s\n department:%s\n fee:%d\n result:%d",stud1.name,stud1.sec,stud1.roll_numb,stud1.dept,stud1.fee,stud1.result);
}
if(stud2.result>=stud1.result)
{
printf("student 2 got the highest marks \n the details of the student is as follows: \n name:%s\n section:%s\n roll number:%s\n department:%s\n fee:%d\n result:%d",stud2.name,stud2.sec,stud2.roll_numb,stud2.dept,stud2.fee,stud2.result);
}
return 0;
}

