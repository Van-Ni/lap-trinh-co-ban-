#include <stdio.h>
main()
{
	int f, f1, f2, n, i;
	printf("Nhap n: ");
	scanf("%d", &n);
	f=f1=f2=1;
	for(i=3;i<=n;i++)
	{
		f=f1+f2;
		f1=f2;
		f2=f;
	}
	printf("F(%d)= %d", n,f);
}
