#include <stdio.h>
#include<math.h>
void nhapMang(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		printf("Nhap phan tu thu a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}
int timKiemGan(int a[], int n, int x)
{
	int min=abs(x-a[0]), vt=0;
	for(int i=1;i<n;i++)
	{
		if(abs(x-a[i])<min)
		{
			min=abs(x-a[i]);
			vt=i;
		}
	}
	return a[vt];
}
int timKiemX(int a[], int n, int x, int k)
{
	int d=0;
	for(int i=0;i<n;i++)
	{
		if(i==k)
		{
			d=a[i];
		}
	}
	return d;
}
main()
{
	int a[10],k,x;
	nhapMang(a,5);
	printf("Nhap k: ");
	scanf("%d", &k);
	printf("X= %d", timKiemX(a,5,x,k));
}
