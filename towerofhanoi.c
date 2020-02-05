#include<stdio.h>

void toh(int n, char from, char to, char aux)
{
	if(n==1)
	{
		printf("\nMove disk 1 from %c to rod %c", from, to);
		return;
	}
	toh(n-1, from, aux, to);
	printf("\nmove disk %d from rod %c to rod %c" ,n, from, to);
	toh(n-1, aux, to, from);
}

int main()
{
	int n;
	printf("Enter number");
	scanf("%d", &n);
	toh(n, 'A', 'C', 'B');
	return 0;
}
