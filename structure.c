#include<stdio.h>
struct student
{
	int roll;
	char name[10];
	int m1,m2,m3;
};
 void main() {
struct student s1 ;
int i;
printf("enter roll numbers");
scanf("%d",&s1.roll);
printf("%d",s1.roll);
printf("enter the name");
scanf("%s",s1.name);
printf("%s",s1.name);
printf("enter the marks in 3 subjects");
scanf("%d\n%d\n%d\n",&s1.m1,&s1.m2,&s1.m3);
printf("%d%d%d",s1.m1,s1.m2,s1.m3);
}
