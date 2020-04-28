//square root of quadratic equation
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float d,rpart,impart;
	printf("enter values of a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	d=b*b-4*a*c;
	if(d>0)
	{
		printf("square root:%f",(-b+sqrt(d))/a);
		printf("/tand/t%f",(-b-sqrt(d))/a);
	}
	else if(d==0)
		printf("square root:%f",-b/a);
	else
		printf("roots are not real");
	getch();
	return 0;
}
