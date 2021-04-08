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
int timKiemXa(int a[], int n, int x)
{
	int max=abs(x-a[0]), vt=0;
	for(int i=1;i<n;i++)
	{
		if(abs(x-a[i])>max)
		{
			max=abs(x=a[i]);
			vt=i;
		}
	}
	return a[vt];
}
main()
{
	int a[10],x;
	nhapMang(a,5);
	printf("Nhap x: ");
	scanf("%d", &x);
	printf("XA X = %d", timKiemXa(a,5,x));
	printf("Gan X = %d", timKiemGan(a,5,x));
}
