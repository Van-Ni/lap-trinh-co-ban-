#include <stdio.h>
void nhapMang(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		printf("Nhap phan tu thu a[%d] ", i);
		scanf("%d", &a[i]);
	}
}
int KiemTraSoChan(int a[], int n)
{
	for(int i=0;i<n-2;i++)
	{
		if(a[i]%2==0 && a[i+1]%2==0)
		{
			return true;
		}
	}
	return false;
}
main()
{
	int a[10], soChan, i;
	nhapMang(a,5);
	soChan=KiemTraSoChan(a,5);
	if(KiemTraSoChan(a,5)==1)
	{
		printf("Trong mang co 2 so chan canh nhau");
	}
	else
	{
		printf("Trong mang ko co 2 so chan canh nhau");
	}
}
