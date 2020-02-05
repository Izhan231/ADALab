
#include<stdio.h>

int gcd(int m, int n)
{
	if(m==n)
	return m;
	else if(m>n)
	return gcd(m-n, n);
	else
	return gcd(m, n-m);
}


int main()
{
	int m, n, res;
	printf("Enter 2 numbers");
	scanf("%d", &m);
	scanf("%d", &n);
	res=gcd(m,n);
	printf("%d", res);
}



