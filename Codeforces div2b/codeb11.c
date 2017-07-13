#include<stdio.h>
#include<math.h>
int main()
{
	int c;
	 double a,b,r,x1,y1,x2,y2;
	scanf("%lf%lf%lf%lf%lf",&r,&x1,&y1,&x2,&y2);
	a=sqrt(((y2-y1)*(y2-y1))+((x2-x1)*(x2-x1)));
	b=a/(2*r);
	b=ceil(b);
	c=b;
	printf("%d",c);
	return 0;
	
}