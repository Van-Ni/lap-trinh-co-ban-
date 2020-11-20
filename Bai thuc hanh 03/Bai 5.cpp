#include <stdio.h>
main()
{
	int n, gt, S, i;
	printf(" Nhap n: ");
	scanf("%d", &n);
	S=0;
	gt=1;
	for(i=1;i<=n;i++)
	{
		gt=(gt*i);
		if(n%2==0)
			S=S-gt;
		else
		   S=S+gt;
	}
	printf("Ket qua= %d", S);
}
