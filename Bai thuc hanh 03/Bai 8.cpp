#include <stdio.h>
main()
{
	int n, max, m;
	printf("Nhap n: ");
	scanf("%d", &n);
	max=0;
	while(n>0)
	{
		m=n%10;
		if(max<m)
		max=m;
		n/=10;
	}
	printf("Max= %d", max);
}
