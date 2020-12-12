#include <stdio.h>
int KiemTraArmstrong(int n)
{
	int m, m1, tong=0;
	m=n;
	while(m>0)
	{
		m1=m%10;
		tong=tong+(m1*m1*m1);
		m/=10;
	}
	if(tong==n)
	return true;
	else
	return false;
}
void LietKeArmstrong(int n)
{
	int i;
	for(i=0;i<=1000;i++)
	{
		if(KiemTraArmstrong(i)==true)
		printf("  %d  ", i);
	}
}
main()
{
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	LietKeArmstrong(n);
}
