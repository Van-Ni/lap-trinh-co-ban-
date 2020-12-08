#include <stdio.h>
main()
{
	int n, i, tong=0;
	printf("Nhap n: ");
	scanf("%d", &n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		tong=tong+i;
	}
	if(tong==n)
	printf("%d la so hoan thien", n);
	else
	printf("%d ko la so hoan thien", n);
}
