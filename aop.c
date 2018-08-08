#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter no1 & no2 :");
 	scanf("%d %d",&a,&b);
	printf("Addition = %d\n",add(a,b));
	printf("Subtraction = %d\n",sub(a,b));
	printf("Multiplication = %d\n",mul(a,b));
	printf("Modulus = %d\n",mod(a,b));
	printf("Division = %d\n",div(a,b));
	return 0;
	
}
int add(int x,int y)
{
	return x+y;
}
int sub(int x,int y)
{
	return x-y;
}
int mul(int x,int y)
{
	return x*y;
}
int mod(int x,int y)
{
	return x%y;
}
int div(int x,int y)
{
	return x/y;
}
