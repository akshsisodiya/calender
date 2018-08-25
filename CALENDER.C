#include<stdio.h>
#include<conio.h>
main()
{
	int d,m,y,c,h,z,p,X,q;
	clrscr();
	printf("Enter your date (DD MM YYYYY) ");
	scanf("%d %d %d",&d,&m,&y);
	if(m==1||m==10)
	  X=0;
	else if (m==2||m==3||m==11)
	   X=3;
	else if(m==4||m==7)
	   X=6;
	else if(m==6)
	   X=4;
	else if(m==5)
	   X=1;
	else if(m==8)
	   X=2;
	else if(m==9||m==12)
	   X=5;
	h=y%100;
	z=h%4;
	p=y-h;
	if(p==1700||p==2100)
	   c=4;
	else if(p==1800||p==2200)
	   c=2;
	else if(p==1900||2300)
	   c=0;
	else if(p==2000)
	   c=6;
		q=(d+X+c+z+h)%7;
	if(q==0)
		printf("It is SUNDAY");
	else if(q==1)
		printf("It is MONDAY");
	else if(q==2)
		printf("It is TUESDAY");
	else if(q==3)
		printf("It is WEDNESDAY");
	else if(q==4)
		printf("It is THURSDAY");
	else if(q==5)
		printf("It is FRIDAY");
	else if(q==6)
		printf("It is SATURADY");
getch();
}