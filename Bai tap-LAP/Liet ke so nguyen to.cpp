#include <stdio.h>
main()
{
	int n, i, j, dem=0;
	printf("Nhap n: ");
	scanf("%d", &n);
	for(i=2;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			dem+=1;
		}
		if(dem==2)
		printf(" %d ", i);
		else
		dem=0;
	}
}

