#include <stdio.h>
main()
{
	int n, m, K=0, heSo=1;
	printf("Nhap n: ");
	scanf("%d", &n);
	while(n>0)
	{
		m=n%10;
		n/=10;
		if(m!=0)
		{
			K=K+m*heSo;
			heSo=heSo*10;
		}
	}
		printf("Ket qua= %d", K);
}
