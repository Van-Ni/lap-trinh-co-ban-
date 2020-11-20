#include <stdio.h>
main()
{
	int n, soDao,m, d;
	printf("Nhap n: ");
	scanf("%d", &n);
	m=n;
	soDao=0;
	while(m!=0)
	{
		d=m%10;
		soDao=soDao*10+d;
		m/=10;
	}
	if(soDao==n)
	printf("Yes");
	else
	printf("No");
}
