#include <stdio.h>
int sum(int n)
{
	if(n==1)
	return 1;
	else
	return sum(n-1)+n;
}
main()
{
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	printf("%d", sum(n));
}
