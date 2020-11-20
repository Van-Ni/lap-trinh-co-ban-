#include <stdio.h>
main()
{
	int n, F1, F2, F3, i;
	printf("Nhap n: ");
	scanf("%d", &n);
	F1=F2=1;
	F3=F1+F2;
	for(i=1;i<=n;i++)
	{
		if(i<3)
		printf("1");
		else
		{
			F1=F2;
			F2=F3;
			F3=F2+F1;
	    printf("%d", F3);
		}
	}
}
