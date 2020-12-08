#include <stdio.h>
main()
{
	int n, m, m1, tong;
	printf("Nhap n: ");
	scanf("%d", &n);
	tong=0;
	m=n;
	while(m>0)
	{
		m1=m%10;
		tong=tong+(m1*m1*m1);
		m/=10;
	}
	if(tong==n)
	printf("%d la so amstrong", n);
	else
	printf("%d khong la so amstrong", n);
}
