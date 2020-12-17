#include <stdio.h>
#include <math.h>
void nhapMang(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		printf("Nhap phan tu thu a[%d] ", i);
		scanf("%d", &a[i]);
	}
}
int KiemTraNgTo(int a[], int n)
{
	if(n<2)
	return false;
	else
	{
		for(int i=2;i<=sqrt(n);i++)
		{
			if(n%i==0)
			{
				return false;
			}
		}
		return true;
	}
}
int InNguyenTo(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]==true)
		{
			return 1;
		}
	}
	return 0;
}
main()
{
	int a[10], ngTo;
	nhapMang(a,5);
	if(InNguyenTo(a,5)==1)
	{
		printf("Trong mang toan so nguyen to");
	}
	else
	{
			printf("Trong mang ko co so nguyen to");
	}
	
}
