#include <stdio.h>
#include<math.h>
void type(float a,float b,float c);
void area(float a,float b,float c);
int main()
{
	float a,b,c;
	printf ("enter sides of triangle:");
	scanf("%f%f%f",&a,&b,&c);
	if(a<b+c && b<a+c && c<a+b)
{
		type(a,b,c);
	area(a,b,c);
	}else
	printf("this triangle is not possible ");
	return 0;
}
void type(float a,float b,float c)
{
	if ((a*a+b*b == c*c)||(b*b+c*c==a*a)||(a*a+c*c==b*b))
	printf("triangle is right angled triangle\n");
	if(a==b && b==c)
	printf("triangle is equalaterial triangle\n");
	else if(a==b||b==c||c==a)
	printf ("tirangle is isosceles\n");
	else 
	printf("triangle is scalene \n");
}
void area(float a,float b,float c)
{
	float area,s;
	s=(a+b+c/2);
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("area of triangle is= %f\n",area);
}
