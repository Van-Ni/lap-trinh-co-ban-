#include <stdio.h>
#include <math.h>
int KiemTraNguyenTo(int n)
{
	int i;
	if(n<2)
	return false;
	else
	{
		for(i=2;i<=sqrt(n);i++)
		{
			if(n%i==0)
			return false;
		}
	}
	return true;
}
int MaxNguyenTo(int a[], int n)
{
	int i, maxNT=0;
	for(i=0;i<n;i++)
	{
		if(KiemTraNguyenTo(a[i])==true && a[i]>maxNT)
		{
			maxNT=a[i];
		}
	}
	return maxNT;
}
void nhapMang(int a[], int n)
{
	for(int i=0;i<n;i++)
{
	printf("Nhap phan tu thu %d", i);
	scanf("%d", &a[i]);
}
}
main()
{
	int x[10], max;
	nhapMang(x,5);
	max=MaxNguyenTo(x,5);
	printf("%d", max);
}
